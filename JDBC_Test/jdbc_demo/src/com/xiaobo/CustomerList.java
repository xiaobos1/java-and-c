package com.xiaobo;

public class CustomerList {
    private Customer[] customers;//用来保存用户数组
    private int total=0;//记录保存客户对象的个数
    /*
        初始化Customer[]数组构造器
     */
    public CustomerList(int totalCustomer){
        customers=new Customer[totalCustomer];
    }
    //将用户添加到指定数组
    public boolean addCustomers(Customer customer){
        if(total>=customers.length){
            return false;
        }
        customers[total]=customer;
        total++;
        return true;
    }
    //public bool...修改
    public boolean replaceCustomer(int index,Customer cust){
        if(index<0 ||index>=total){
            return false;
        }
        customers[index]=cust;
        return true;
    }
    //删除
    public boolean deleteCustomer(int index){
        if(index<0 ||index >=total){
            return false;
        }
        for(int i=index;i<index-1;i--){
            customers[i]=customers[i-1];
        }
        customers[total-1]=null;
        total--;
        return true;
    }
    //打印
    public Customer[] getCustomers() {
        Customer[] custs = new Customer[total];
        for(int i=0;i<total;i++){
            custs[i]=customers[i];
        }
        return custs;
    }
    //获取指定索引位置
    public Customer getCustomer(int index){
        if(index<0 ||index >=total){
            return null;
        }
        return customers[index];
    }
    //获取用户的数量
    public int getTotal(){
        return total;
    }
}
