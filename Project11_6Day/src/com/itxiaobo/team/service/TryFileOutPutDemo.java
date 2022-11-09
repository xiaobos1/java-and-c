package com.itxiaobo.team.service;

import java.io.FileOutputStream;
import java.io.IOException;

public class TryFileOutPutDemo {
    public static void main(String[] args) {
        FileOutputStream fos=null;
        try{
            fos=new FileOutputStream("Project11_6Day\\fos.txt");
            fos.write("西欧".getBytes());
        }catch(IOException e){
            e.printStackTrace();
        }finally{
            if(fos !=null){
                try{
                    fos.close();
                }catch(IOException e){
                    e.printStackTrace();
                }
            }
        }
    }
}
