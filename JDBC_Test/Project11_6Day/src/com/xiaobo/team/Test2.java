package com.xiaobo.team;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;

public class Test2 {
    public static void main(String[] args) throws IOException {
        //创建集合
        ArrayList<Student> list =new ArrayList<>();
        //添加数据
        Student s1=new Student("xiaobo1","林青霞",30,"西安");
        Student s2=new Student("xiaobo2","云韵",26,"北京");
        Student s3=new Student("xiaobo3","宝贝",18,"南京");

        list.add(s1);
        list.add(s2);
        list.add(s3);
        //创建字节输出流
        BufferedWriter bw=new BufferedWriter(new FileWriter("Project11_6Day\\student.txt"));

        for(Student stu:list){
           //将学生拼成指定字符串
            StringBuilder sb=new StringBuilder();
            sb.append(stu.toString());

            //
            bw.write(sb.toString());
            bw.newLine();
            bw.flush();
        }
        bw.close();
    }
}
