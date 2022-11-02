package com.xiaobointerface;

public class newWork {
    public static void main(String[] args) {
        Server server=new Server();
        ProxyServer proxyServer = new ProxyServer(server);
        proxyServer.browse();
    }
}
interface NetWork{
    public void browse();
}
//被代理类
class Server implements NetWork{

    @Override
    public void browse() {
        System.out.println("真实服务器被访问");
    }
}
//代理类
class ProxyServer implements NetWork{

    private NetWork work;
    public  ProxyServer(NetWork work){
        this.work=work;
    }
    public void check(){
        System.out.println("联网之前的检查工作");
    }
    @Override
    public void browse() {
        check();

    }
}