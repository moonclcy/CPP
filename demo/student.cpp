#include<iostream>
using namespace std;

struct student
    {
        string sNanme;
        int score;
    };



struct teacher
{
    string tName;
    struct student sArray[5];
    
};

void allocateSpace(struct teacher tArray[], int len){
    for (int  i = 0; i < len; i++)
    {
        tArray[i].tName = "teacher" + i;

        for (int j = 0; j < 5; j++)
        {
            tArray[i].sArray[j].sNanme = "student" +j;
            tArray[i].sArray[j].score = 60;
        }  
    }
}

void printinfo(struct teacher tArray[], int len){
    for (int i = 0; i < len; i++)
    {
        cout << "lsname" << tArray[i].tName << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "student_name:" << tArray[i].sArray[j].sNanme << "fenshu" << tArray[i].sArray->score << endl;
        }
        
    }
    
}

int main(){
    struct teacher tArray[3];

    int len = sizeof(tArray) / sizeof(tArray[0]);

    printinfo(tArray, len);    
}