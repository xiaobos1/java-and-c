package com.xiaobo;

public class ArgsDemo3 {
    //可变参数的练习
    public static void main(String[] args) {
        int sum =getSum(1,2,3,4,5,6,7,8,9,10);
        System.out.println(sum);
    }

    //可变参数打方法
    public static int getSum(int...a){
        int sum=0;
        for(int i:a){
            sum +=i;
        }
        return sum;
    }
}
