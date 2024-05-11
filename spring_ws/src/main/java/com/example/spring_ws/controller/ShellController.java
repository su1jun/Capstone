package com.example.spring_ws.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.shell.Shell;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class ShellController {

    @Autowired
    private Shell shell;

    @PostMapping("/shell")
    public String executeCommand(@RequestBody String command) {
        return (String) shell.evaluate(() -> command);
    }
}
