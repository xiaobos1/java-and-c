package com.itxiao.Test003;


import java.util.Scanner;

public class Test001 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("输入你的购买商品的总金额:");
        double money=sc.nextDouble();
        if(money>=1000) {
            System.out.println("实际支付金额："+money*0.80);
            System.out.println("获取购物劵金额：200");
        }else if(money>=500){
            System.out.println("实际支付金额："+money*0.85);
            System.out.println("获取购物劵金额：100");
        }else if(money>=300){
            System.out.println("实际支付金额："+money*0.9);
            System.out.println("获取购物劵金额：70");
        }else{
            System.out.println("实际支付金额："+money*0.95);
            System.out.println("获取购物劵金额：0");
        }

    }
}
