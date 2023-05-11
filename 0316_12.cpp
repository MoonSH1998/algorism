////  algorism
////
////  Created by 문성하 on 2022/03/16.
////
//
//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//    int a;
//    int &b = a;
//    int &c = b;
//    c = 5;
//    printf("%d %d %d \n", a, b, c);
//    
//    int *p = &a;
//    int *&q = p;
//    *q = 7;
//    printf("%d %d %d \n", a, *p, *q);
//    
//    int arr[3];
//    int(&rArr)[3] = arr;
//    rArr[1] = 3;
//    printf("%d %d \n", arr[1], rArr[1]);
//    
//    return 0;
//}
