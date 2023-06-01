#include<stdio.h>
#include<stdlib.h>
#include "System.h"

//欢迎界面
void WelcomeUI();

//选择操作
void SelectOptions(flightLists* info);


//主程序
int main(void)
{

    WelcomeUI();				//欢迎界面

    flightLists* info;			//设置指向顺序表指针
    info = (flightLists*)malloc(sizeof(flightLists));
    info->length = 0;           //设置顺序表初始长度

    InputByOld(info);           //导入数据文件
    SelectOptions(info);        //选择操作

    free(info);
    system("pause");            //暂停
    return(0);
}

//欢迎界面
void WelcomeUI()
{
    printf("\t*****************************************************************************************\n");
    printf("\t*****************************************************************************************\n");
    printf("\t**********                                                                     **********\n");
    printf("\t**********                    欢迎来到航班信息系统！！！                       **********\n");
    printf("\t**********            Welcome to the Flight Information System！！！           **********\n");
    printf("\t**********                                                                     **********\n");
    printf("\t*****************************************************************************************\n");
    printf("\t*****************************************************************************************\n");

}


//选择操作
void SelectOptions(flightLists* info)
{
    int one = -1;      				//选择接下来的操作序号

    printf("\n");
    puts("\t---------------------------------");
    puts("\t|\t1.录入航班信息\t\t|");
    puts("\t---------------------------------");
    puts("\t|\t2.查询航班信息\t\t|");
    puts("\t---------------------------------");
    puts("\t|\t3.排序航班信息\t\t|");
    puts("\t---------------------------------");
    puts("\t|\t4.删除航班信息\t\t|");
    puts("\t---------------------------------");
    puts("\t|\t5.修改航班信息\t\t|");
    puts("\t---------------------------------");
    puts("\t|\t6.打印航班信息\t\t|");
    puts("\t---------------------------------");
    puts("\t|\t0.退出程序    \t\t|");
    puts("\t---------------------------------");

    printf("请问需要选择的操作(0-6)：");
    while (one < 0 || one > 6)
    {
        scanf("%d", &one);
        switch (one)
        {
            case 0:
                break;							//退出
            case 1:
                InputSelectOne(info);			//导入
                break;
            case 2:
                SearchSelectOne(info);			//查询
                break;
            case 3:
                SortSelectOne(info);			//排序
                break;
            case 4:
                DeleteSelectOne(info);			//删除
                break;
            case 5:
                UpdateSelectOne(info);			//修改
                break;
            case 6:
                InfoPrint(info);				//打印
                break;

            default:
                printf("请输入正确的信息来选择操作(0-6):");
        }
    }
    printf("\n");
}

