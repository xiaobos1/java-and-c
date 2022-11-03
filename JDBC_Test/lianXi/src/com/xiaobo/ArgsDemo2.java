package com.xiaobo;

public class ArgsDemo2 {
    public static void main(String[] args) {
        int[] arr={1,2,3,4,5,6,7,8,8};
        int sum=0;
        for (int i = 0; i < arr.length; i++) {
            sum +=arr[i];
        }
        int sum1=getSum(arr);
        System.out.println(sum1);
        System.out.println(sum);
    }
    public static int getSum(int[] arr){
        int sum=0;
        for(int i:arr){
            sum +=i;
        }
        return sum;
    }
}
