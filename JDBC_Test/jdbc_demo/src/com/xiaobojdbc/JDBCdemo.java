package com.xiaobojdbc;

import java.sql.Connection;
import java.sql.Driver;
import java.sql.DriverManager;
import java.sql.Statement;
//JDBC入门
public class JDBCdemo {
    public static void main(String[] args) throws Exception {
        //注册
         Class.forName("com.mysql.jdbc.Driver");
        //获取连接
        String url="jdbc:mysql://localhost:3306/gouwa?useSSl=false&serverTimezone=UTC";
        String username="root";
        String password="root";

        Connection conn=DriverManager.getConnection(url,username,password);

        //定义sql语句
        String sql="update students set name='lishi' where id =1";

        //获取执行sql的对象Statement
        Statement stmt=conn.createStatement();

        //执行sql
        int count=stmt.executeUpdate(sql);//受影响的行数

        System.out.println(count);

        //释放资源
        stmt.close();
        conn.close();
    }

}
