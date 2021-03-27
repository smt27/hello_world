// Example program for average of 5 students
#include <iostream>
#include <string>
using namespace std;
class students
{
    private:
            string name;
            int age;
            float per;
    public: students()  //constructor
    {
         name='X';
         age=0;
         per=0.0;
    }
    void accept()
    {
        cout<<"enter the name of student:";
        cin>>name;
        cout<<"enter the age:";
        cin>>age;
        cout<<"enter the per:";
        cin>>per;
    }
    float re_per()   //for returning per value so that main function can access it
    { 
        return per;
    }
   
    ~students()  //destructor
    {cout<<"\nthe memory is free now"; }
};

int main()
{ float avg,sum;
  students s[5];
    for(int i=0;i<5;i++)   //iterate 'accept' function 5 times to accept name,age,per
        s[i].accept();
    for(int i=0;i<5;i++)   //iterate 5 times and access re_per function to return per value
       {
           sum += s[i].re_per();   //all the values of per which has been returned will be added to sum
       }
       avg=sum/5;
       cout<<"avg is:"<<avg;
  return 0;
}
