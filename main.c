/**
  ******************************************************************************
  * @file    main.c
  * @author  Hongxi Wong
  * @version V1.0.0
  * @date    2019/12/17
  * @brief   
  ******************************************************************************
  * @attention 
  *
  ******************************************************************************
  */
#include "SerialDebug.h"
#include "windows.h"

float a,b,c,d,e,f;

int main()
{

    Serial_Debug(&huart2, 5, a,b,c,d,e,f);

    system("pause");
    return 0;
}

