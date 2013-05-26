//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

#include "beibao.h"

//显示菜单
void show_menu()
{
    printf("--------------------------------------------- ");
    printf("input command to test the program ");
    printf("   i or I : input filename to test ");
    printf("   q or Q : quit ");
    printf("--------------------------------------------- ");
    printf("$ input command >");
}

int main()
{
    char sinput[10];
    char sfilename[FILENAMELENGTH];

    show_menu();

    scanf("%s",sinput);
    while(strcasecmp(sinput,"q")!=0)
    {
        if(strcasecmp(sinput,"i")==0)
        {
            printf("  please input a filename:");
            scanf("%s",sfilename);

            //获取满足最大载重量的最大价值
            CBeibao beibao(sfilename);
            int nMaxValue=beibao.GetMaxValue();
            if(nMaxValue)
            {
                beibao.Display(nMaxValue);
                int nlen=strlen(sfilename);
                strcpy(sfilename+nlen-4,"_result.txt");
                beibao.Display(nMaxValue,sfilename);
            }
            else
                printf("   error! please check the input data! ");
        }

        //输入命令
        printf("$ input command >");
        scanf("%s",sinput);
    }
    return 0;
}
