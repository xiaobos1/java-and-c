package com.xiaoboSet;

import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        System.out.println("输入一个不大于五位的正整数");
        Scanner sc=new Scanner(System.in);//键盘输入
        int c=sc.nextInt();//获取整型数据
        int sum=0;
        while(true){
            if(c==0){
                break;
            }
            sum +=c%10;
            c /=10;
        }
        System.out.println(sum);

    }
}
