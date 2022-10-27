package com.xiaobo.Test;

public class Test001 {
    public static void main(String[] args) {
        //创建一个长度为12的数组、
        int[] arr=new int[12];
        //给前俩个赋值
        arr[0]=1;
        arr[1]=1;
        for (int i = 2; i <arr.length ; i++) {
            arr[i]=arr[i-1]+arr[i-2];
            System.out.println(arr[i]);
        }
        System.out.println(getSum(12));
    }
    public static int getSum(int month){
        if(month ==1 || month ==2){
            return 1;
        }else{
            return getSum(month-2)+getSum(month-1);
        }
    }
}
