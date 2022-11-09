package com.atxiaobo.team.domain;

import java.io.File;

public class Test001 {
    public static void main(String[] args) {
        File f1=new File("F://xiaobo");
        getFilePath(f1);
    }
    public static void getFilePath(File sfile){
        //获取给定的File目录下所有的文件或目录的File数组
        File[] fileArray=sfile.listFiles();
        //遍历file数组
        if(fileArray !=null){
            for(File file:fileArray){
                if(file.isDirectory()){
                   getFilePath(file);
                }else{
                    System.out.println(file.getAbsolutePath());
                }
            }
        }

    }
}
