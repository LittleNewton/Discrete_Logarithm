// BSGS.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include <NTL/ZZ.h>
#include <stdlib.h>
NTL_CLIENT
void main()
{
    ZZ a, b, c, d;
    a = to_ZZ("11111111111111111111111111"); //凡是大于32比特的数都要这样输入
    b = to_ZZ("22222222222222222222222222");
    cout << "a * b = " << a * b << "\n";

    system("pause");
}