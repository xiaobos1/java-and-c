package com.xiaobo;

public class ArgsDemo1 {
    public static void main(String[] args) {
        System.out.println(getSum(1,2));
        System.out.println(getSum(10,20,30));
        System.out.println(getSum(1,2,23,17));
    }
    //计算俩个数据的和
    public static int getSum(int a,int b){
        return a+b;
    }
    //计算三个数据的和
    public static int getSum(int a,int b,int c){
        return a+b+c;
    }
    //计算四个数据的和
    public static int getSum(int a,int b,int c,int d){
        return a+b+c+d;
    }
}
