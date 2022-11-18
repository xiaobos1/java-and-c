package com.itxiao.Test003;

public class Test1 {
    public static void main(String[] args) {
        int[] arr={5,2,1,9,7,3,4,8,6};

        //分块排序
        for(int i=1;i<arr.length;i++){
            //arr[0]>arr[1]
            //互换索引的值
            for(int j=i-1;j>=0&&arr[j]>arr[j+1];j--){
                getArray(arr,j,j+1);
            }
        }
        int l=0;
        int r=arr.length-1;
        int m=(r+l)>>1;
        System.out.println(m);
        for (int i :arr) {
            System.out.print(i+" ");
        }
    }
    //更换索引的值
    public static void getArray(int[] arr,int i,int j){
        arr[i]=arr[i]^arr[j];
        arr[j]=arr[i]^arr[j];
        arr[i]=arr[i]^arr[j];
    }

    public static void newArray(int[] arr){

        int l=0;
        int r=arr.length-1;
        int m=(r+l)>>1;
        int p=m;
        int p1=m+1;
        while(l<=p&&p1<=r){

        }
    }
}
