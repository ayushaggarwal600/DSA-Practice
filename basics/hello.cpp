#include <iostream>
using namespace std;

// string intToRoman(int num){
//   string romanSymbols[]={"M","CM","D","CD","CD","XC","L","XL","X","IX","V","IV","I"};
//   int values[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
//   string ans = "";
//   for (int i = 0; i < 13; i++)
//   {
//     while (num>=values[i])
//     {
//       ans+=romanSymbols[i];
//       num-=values[i];
//     }
//   }
//   return ans;
// }
class Student
{
public:
  // Student * this;
  // int age;
  // double du;
  // double bu;
  // char ch;
  // bool bo;
  string name;
};
int main()
{
  // cout<<sizeof(Student);
  Student *ptr = new Student;
  Student *ptr1 = new Student();
  // int i = 1;
  // for (;;) {
  //   if (i <= 5) {
  //     cout << "hi" << i << endl;
  //   }
  //   // else
  //   // {
  //   //   break;
  //   // }
  //   i = i + 1;
  // }

  // int arr[5] = {1, 2, 3, 4, 5};
  // int *ptr = arr;

  // cout << arr << endl;
  // cout << &arr << endl;
  // cout << ptr << endl
  //      << endl;
  // cout << *ptr << endl;
  // cout << *(arr + 2) << endl;
  // cout << *(2 + arr) << endl;
  // cout << 2 [arr] << endl;
  // cout << arr[2] << endl;
  // cout << *(ptr + 2) << endl;
  // if (arr[2] == 2 [arr]){
  //   cout << "true";
  // }
  // else{
  //   cout << "false";
  // }

  // char ch[5]="love";
  // char *ptr = ch;
  // cout<<endl<<ch;
  // cout<<endl<<&ch;
  // cout<<endl<<*ch;
  // cout<<endl<<ptr;
  // cout<<endl<<&ptr;
  // cout<<endl<<*ptr;

  // int arr[5] = {1, 4, 30, 44, 59};
  // int *ptr = arr;

  // for (int i = 0; i < 5; i++)
  // {
  //   cout<<*(ptr+i)<<" "<<ptr[i]<<" "<<arr[i]<<" "<<*(arr+i)<<endl;
  // }

  // int arr[3][3] = {
  //   {1, 2, 3},
  //   {4, 5, 6},
  //   {7, 8, 9}
  // };
  // int(*ptr)[3] = arr;
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     cout<<ptr[i][j]<<" ";
  //     // cout<<*(*(arr+i))+j<<" ";
  //     // cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }
  // string name = "Hello";
  // cout<<sizeof(name);

  int x = 17;
  int *p = &x;
  printf("%d\n",*&x);
  printf("%p\n",*&x);
  printf("%p\n",&x);
  printf("%d\n",&x);
  return 0;
}