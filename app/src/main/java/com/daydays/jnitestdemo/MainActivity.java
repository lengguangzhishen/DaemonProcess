package com.daydays.jnitestdemo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView tv = (TextView) findViewById(R.id.tv);

        tv.setText("hehehe");

        NdkJniUtils ndkJniUtils = new NdkJniUtils();
        ndkJniUtils.getCLanguageString();

    }



}
