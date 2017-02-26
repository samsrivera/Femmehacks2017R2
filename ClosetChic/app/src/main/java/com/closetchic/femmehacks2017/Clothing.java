package com.closetchic.femmehacks2017;
import android.media.Image;

import java.awt.*;
import java.awt.image.*;
import java.io.*;
import javax.imageio.*;
import javax.swing.*;
/**
 * Created by sejoy on 2/25/2017.
 */

public class Clothing {

    public String descr;
    public Image pic = new Image();

    public Clothing(String description, Image picture){
        descr = description;
        pic = picture;
    }
}
