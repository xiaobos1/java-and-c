package com.xiaobo;

import java.util.Scanner;

public class CustomerView {
    private CustomerList customerList = new CustomerList(10);

    public CustomerView(){
        Customer customer=new Customer("简风",'男',23,"12345676789","it@heima.com");
        customerList.addCustomers(customer);
    }
    public static void main(String[] args) {
        CustomerView view = new CustomerView();
        view.enterMainMenu();
    }

    public void enterMainMenu() {
        boolean bool = true;
        while (bool) {
            System.out.println("\n-------------------客户信息管理软件-------------");
            System.out.println("                     1.添加用户");
            System.out.println("                     2.修改用户");
            System.out.println("                     3.删除用户");
            System.out.println("                     4.用户列表");
            System.out.print("                     5.退出\n");
            System.out.print("    请选择(1-5) >:");
            char c = CMUtility.readMenuSelection();
            switch (c) {
                case '1' -> {
                    addNewCustomer();
                    break;
                }
                case '2' -> {
                    modifyCustomer();
                    break;
                }
                case '3' -> {
                    deleteCustomer();
                    break;
                }
                case '4' -> {
                    listAllCustomer();
                    break;
                }
                case '5' -> {
                    System.out.println("确定是否退出(Y/N):");
                    char isExit = CMUtility.readConfirmSelection();
                    if (isExit == 'Y') {
                        bool = false;
                    }
                    break;
                }
                default -> {
                    System.out.println("错误，不符要求");
                    break;
                }
            }
        }
    }

    //添加方法
    public void addNewCustomer() {
        System.out.println("姓名");
        String name=CMUtility.readString(10);
        System.out.println("性别");
        char gender=CMUtility.readChar();
        System.out.println("年龄");
        int age=CMUtility.rendInt();
        System.out.println("电话");
        String phone=CMUtility.readString(13);
        System.out.println("邮箱");
        String email=CMUtility.readString(30);

        //将上述数据分装到对象中
        Customer customer=new Customer(name,gender,age,phone,email);
        boolean b = customerList.addCustomers(customer);
        if(b){
            System.out.println("添加成功");
        }else{
            System.out.println("添加失败");
        }

    }

    //修改
    public void modifyCustomer() {
        Customer cust;
        int num;
        for(;;){
            System.out.println("输入你要修改的编号(-1退出)");
            num=CMUtility.rendInt();
            if(num==-1){
                return ;
            }
             cust= customerList.getCustomer(num - 1);
            if(cust==null){
                System.out.println("无法找到指定客户：");
            }else{
                break;
            }
        }
        System.out.println("姓名（"+cust.getName()+"):");
        String name=CMUtility.readString(10,cust.getName());
        System.out.println("性别("+cust.getGender()+"):");
        char gender=CMUtility.readChar(cust.getGender());
        System.out.println("年龄("+cust.getAge()+"):");
        int age = CMUtility.readInt(cust.getAge());
        System.out.println("电话("+cust.getPhone()+"):");
        String phone = CMUtility.readString(13, cust.getPhone());
        System.out.println("邮箱("+cust.getEmail()+"):");
        String email = CMUtility.readString(30, cust.getEmail());

        Customer newCust=new Customer(name,gender,age,phone,email);
        boolean isRepalaed = customerList.replaceCustomer(num - 1, newCust);
        if(isRepalaed){
            System.out.println("修改成功");
        }else{
            System.out.println("修改失败");
        }

    }

    //删除
    public void deleteCustomer() {
        System.out.println("输入要删除的编号：");
        Customer cust;
        int number=CMUtility.rendInt();
        for(;;) {
            System.out.println("输入你要删除的编号(-1退出)");
            number = CMUtility.rendInt();
            if (number == -1) {
                return;
            }
            cust=customerList.getCustomer(number-1);
            if(cust==null){
                System.out.println("无法找到指定客户：");
            }else{
                break;
            }
        }
        //找到指定用户
        System.out.println("确定是否删除（Y/N）");
        char isDelete = CMUtility.readConfirmSelection();
        if(isDelete=='Y'){
            customerList.deleteCustomer(number-1);
            System.out.println("删除成功");
        }else{
            return ;
        }
    }

    //获取
    public void listAllCustomer() {
        System.out.println("----------------客户列表------------");
        int total = customerList.getTotal();
        if (total == 0) {
            System.out.println("没有用户记录");
        } else {
            System.out.println("编号\t姓名\t性别\t年龄\t电话\t\t邮箱");
            Customer[] custs = customerList.getCustomers();
            for (int i = 0; i < custs.length; i++) {
                Customer cust = custs[i];
                System.out.println((i+1)+"\t"+cust.getName()+"\t"+
                        cust.getGender()+"\t"+cust.getAge()+"\t"+
                        cust.getPhone()+"\t"+cust.getEmail());
            }
        }
        System.out.println("-------------------客户列表完成-----------------");
    }
}