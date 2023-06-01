#include<stdio.h>
#include<stdlib.h>
#include "System.h"

//��ӭ����
void WelcomeUI();

//ѡ�����
void SelectOptions(flightLists* info);


//������
int main(void)
{

    WelcomeUI();				//��ӭ����

    flightLists* info;			//����ָ��˳���ָ��
    info = (flightLists*)malloc(sizeof(flightLists));
    info->length = 0;           //����˳�����ʼ����

    InputByOld(info);           //���������ļ�
    SelectOptions(info);        //ѡ�����

    free(info);
    system("pause");            //��ͣ
    return(0);
}

//��ӭ����
void WelcomeUI()
{
    printf("\t*****************************************************************************************\n");
    printf("\t*****************************************************************************************\n");
    printf("\t**********                                                                     **********\n");
    printf("\t**********                    ��ӭ����������Ϣϵͳ������                       **********\n");
    printf("\t**********            Welcome to the Flight Information System������           **********\n");
    printf("\t**********                                                                     **********\n");
    printf("\t*****************************************************************************************\n");
    printf("\t*****************************************************************************************\n");

}


//ѡ�����
void SelectOptions(flightLists* info)
{
    int one = -1;      				//ѡ��������Ĳ������

    printf("\n");
    puts("\t---------------------------------");
    puts("\t|\t1.¼�뺽����Ϣ\t\t|");
    puts("\t---------------------------------");
    puts("\t|\t2.��ѯ������Ϣ\t\t|");
    puts("\t---------------------------------");
    puts("\t|\t3.���򺽰���Ϣ\t\t|");
    puts("\t---------------------------------");
    puts("\t|\t4.ɾ��������Ϣ\t\t|");
    puts("\t---------------------------------");
    puts("\t|\t5.�޸ĺ�����Ϣ\t\t|");
    puts("\t---------------------------------");
    puts("\t|\t6.��ӡ������Ϣ\t\t|");
    puts("\t---------------------------------");
    puts("\t|\t0.�˳�����    \t\t|");
    puts("\t---------------------------------");

    printf("������Ҫѡ��Ĳ���(0-6)��");
    while (one < 0 || one > 6)
    {
        scanf("%d", &one);
        switch (one)
        {
            case 0:
                break;							//�˳�
            case 1:
                InputSelectOne(info);			//����
                break;
            case 2:
                SearchSelectOne(info);			//��ѯ
                break;
            case 3:
                SortSelectOne(info);			//����
                break;
            case 4:
                DeleteSelectOne(info);			//ɾ��
                break;
            case 5:
                UpdateSelectOne(info);			//�޸�
                break;
            case 6:
                InfoPrint(info);				//��ӡ
                break;

            default:
                printf("��������ȷ����Ϣ��ѡ�����(0-6):");
        }
    }
    printf("\n");
}
