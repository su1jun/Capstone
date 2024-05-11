package com.example.spring_ws.temp;

import org.springframework.shell.standard.ShellComponent;
import org.springframework.shell.standard.ShellMethod;

@ShellComponent
public class CustomCommands {

    @ShellMethod("Say hello")
    public String sayHello() {
        return "Hello, World!";
    }

    @ShellMethod("Add two integers")
    public int add(int a, int b) {
        return a + b;
    }
}