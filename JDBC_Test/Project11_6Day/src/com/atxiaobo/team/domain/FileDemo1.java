package com.atxiaobo.team.domain;

import java.io.File;
import java.io.IOException;


public class FileDemo1 {
    public static void main(String[] args) throws IOException {
        File f1=new File("Project11_6Day\\javaSE\\java.txt");
        //System.out.println(f1.createNewFile());
        //System.out.println(f1.delete());//删除方法boolean delete()

        //在当前目录创建目录
        //System.out.println(f1.mkdir());
        //System.out.println(f1.delete());
        File f2=new File("Project11_6Day\\javaSE");
        //System.out.println(f2.delete());

        int sum=getSum(12);
        System.out.println(sum);

        // System.out.println(f2.mkdir());
        //System.out.println(f1.createNewFile());
    }
    public static int getSum(int i){
        if(i==1){
            return 1;
        }
        if(i==2) {
            return 1;
        }
        return getSum(i-2)+getSum(i-1);
    }
}
