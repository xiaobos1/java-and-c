package com.xiaobo;
//封装用户信息
public class Customer {
    //姓名
    private String name;
    //性别
    private char gender;
    //年龄
    private int age;
    //电话
    private String phone;
    //邮箱
    private String email;

    //空参构造
    public Customer(){

    }
    //代参构造
    public Customer(String name,char gender,int age,String phone,String email){
        this.name=name;
        this.gender=gender;
        this.age=age;
        this.phone=phone;
        this.email=email;
    }
    public void setName(String name){
        this.name=name;
    }
    public String getName(){
        return name;
    }

    public void setGender(char gender) {
        this.gender = gender;
    }

    public char getGender() {
        return gender;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public int getAge() {
        return age;
    }

    public void setPhone(String phone) {
        this.phone = phone;
    }

    public String getPhone() {
        return phone;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getEmail() {
        return email;
    }

    @Override
    public String toString() {
        return "Customer{" +
                "name='" + name + '\'' +
                ", gender=" + gender +
                ", age=" + age +
                ", phone='" + phone + '\'' +
                ", email='" + email + '\'' +
                '}';
    }
}
