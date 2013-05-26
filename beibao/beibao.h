/************************************************************************
 * 0/1背包问题求解 (visual studio 2005)
 * 给定一个载重量为m,及n个物品,其重量为wi,价值为vi,1<=i<=n
 * 要求:把物品装入背包,并使包内物品价值最大
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAMELENGTH 100

class CBeibao
{
public:
    int m_nNumber;        //物品数量
    int m_nMaxWeight;    //最大载重量

    int *m_pWeight;        //每个物品的重量
    int *m_pValue;        //每个物品的价值

    int *m_pCount;        //每个物品被选中的次数
    int m_nMaxValue;    //最大价值

public:
    CBeibao(const char *filename);
    ~CBeibao();
    
    int GetMaxValue();
    int GetMaxValue(int n,int m,int *w,int *v,int *c);
    void Display(int nMaxValue);
    void Display(int nMaxValue,const char *filename);
};

