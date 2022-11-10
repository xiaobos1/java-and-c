package com.xiaobolian;

public class EcmDef extends Throwable {
    public static void main(String[] args) {
        int result= 0;
        try {
            result = ecm(4,1);
        } catch(EcDef e){
            System.out.println(e.getMessage());
        }
        System.out.println(result);
    }
    public static int ecm(int i, int j) throws EcDef{
        if(i<0||j<0) {
            throw new EcDef("分子或分母为零");
        }
        return i/j;
    }
}
