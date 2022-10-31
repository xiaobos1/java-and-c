package com.xiaoboMap;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import java.util.function.BiConsumer;

public class MapDemo003 {
    public static void main(String[] args) {
        //构建一个hashSep
        HashMap<Student ,String> hm=new HashMap<>();
        //添加元素
        Student s1=new Student("lishi",20);
        Student s2=new Student("jianfen",23);
        Student s3=new Student("zhangsan",34);
        Student s4=new Student("wangwu",18);

        hm.put(s1,"湖南");
        hm.put(s2,"湖北");
        hm.put(s3,"江西");
        hm.put(s4,"新疆");

        //创建一个set来遍历student

        Set<Student> keys=hm.keySet();
        for(Student stu:keys){
            String key=hm.get(stu);
            System.out.println(stu+"="+key);
        }
        System.out.println("-------------------------------");
        Set<Map.Entry<Student, String>> entries = hm.entrySet();
        for(Map.Entry<Student,String> entry:entries){
            Student key=entry.getKey();
            String values=entry.getValue();
            System.out.println(key+"="+values);
        }
        System.out.println("-----------------------------------");
        hm.forEach((Student student, String s) ->System.out.println(student +"="+s));

    }
}
