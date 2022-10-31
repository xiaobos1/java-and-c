package com.xiaoboSet;

import java.util.HashSet;

public class HashDemo2 {
    public static void main(String[] args) {
        //1.创建三个学生对象
        Student s1=new Student("zhangsan",19);
        Student s2=new Student("lishi",19);
        Student s3=new Student("zhaoliu",20);

        //创建hashSet
        HashSet<Student> hash=new HashSet<>();
        hash.add(s1);
        hash.add(s2);
        hash.add(s3);

        System.out.println(hash);
    }
}
