package com.itxiao.Test005;

import java.net.InetAddress;
import java.net.UnknownHostException;

public class ipDemo {
    public static void main(String[] args) throws UnknownHostException {
        InetAddress it=InetAddress.getByName("0.0.0.189");


        String name =it.getHostName();

        String ip=it.getHostAddress();

        System.out.println("主机名:"+name);
        System.out.println("IP地址:"+ip);
    }
}
