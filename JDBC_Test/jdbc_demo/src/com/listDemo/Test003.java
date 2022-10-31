package com.listDemo;

import java.util.Scanner;

public class Test003 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //贷款本金
        System.out.println("输入你的贷款本金:");
        double p = sc.nextDouble();
        //贷款月利率
        System.out.println("输入月利率:");
        double yr = sc.nextDouble();
        double mr=yr/12/100;
        //还款月数
        System.out.println("输入你的还款月数:");
        int m = sc.nextInt();

        double in = Math.pow(1 + mr, m);
        double money = p * mr * in / (in - 1);
        System.out.printf("￥%.2f", money);
    }
}
