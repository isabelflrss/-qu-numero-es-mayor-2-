/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Hector
 *
 * Created on 26 de agosto de 2018, 06:21 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    printf("Hola usuario, dame dos numeros\n");
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    if (num1>num2){
        printf("El mayor es %d",num1);
    }else {
        printf("El mayor es %d",num2);
    }
    return 0;
}

