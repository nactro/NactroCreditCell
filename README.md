<p >
  <img src="https://raw.githubusercontent.com/nectra/NectraCreditCell/master/Screenshots/1.JPG" alt="screenshot" title="screenshot">
</p>

# NectraCreditCell
NectraCreditCell 是一个为 Preference 封装的 Credit Cell 库，用于便捷的展示 Credit 信息
</br>
Forked From @TranslucentMessage.

#### Usage
* 在项目界面工程根目录下的的 `Makefile` 文件中，告知编译器进行编译。
```makefile
CPUTurboSettings_FILES = NectraCreditOption.m NectraCreditService.m NectraCreditCell.m
```
* 在项目界面工程`Resource`目录下的 `Root.plist` 文件中传值。
* 正如最上方的截图可以看到，有多种 icon 可以使用。

##### 个人网站
```xml
<dict>
<key>service</key>
<string>website</string>
<key>username</key>
<string> 网址 </string>
</dict>
```
##### 推特
```xml
<dict>
<key>service</key>
<string>twitter</string>
<key>username</key>
<string> 推特用户名 </string>
</dict>
```
##### 邮件
```xml
<dict>
<key>service</key>
<string>email</string>
<key>username</key>
<string> 邮件地址 </string>
</dict>
```
##### Reddit
```xml
<dict>
<key>service</key>
<string>reddit</string>
<key>username</key>
<string> Reddit 用户名</string>
</dict>
```
##### PayPal
```xml
<dict>
<key>service</key>
<string>paypal</string>
<key>username</key>
<string> PayPal 用户名</string>
</dict>
```
##### GitHub
```xml
<dict>
<key>service</key>
<string>github</string>
<key>username</key>
<string> Github 用户名</string>
</dict>
```
##### instagram 
```xml
<dict>
<key>service</key>
<string>instagram</string>
<key>username</key>
<string> Instagram 用户名</string>
</dict>
```
##### GooglePlus
```xml
<dict>
<key>forcedFormattedUsername</key>
<string>AppleBetas</string>
<key>service</key>
<string>googlePlus</string>
<key>username</key>
<string> GooglePlus 账号数字组 </string>
</dict>
```
##### Youtube Channel
```xml
<dict>
<key>forcedFormattedUsername</key>
<string>AppleBetas</string>
<key>service</key>
<string>youtube</string>
<key>username</key>
<string> YouTube 地址</string>
</dict>
```
#### 完整使用实例
```xml
<dict>
<key>creditOptions</key>
<array>
<dict>
<key>service</key>
<string>website</string>
<key>username</key>
<string>https:/7float.com/</string>
</dict>
<dict>
<key>service</key>
<string>twitter</string>
<key>username</key>
<string>ryaneddisford</string>
</dict>
<dict>
<key>service</key>
<string>email</string>
<key>username</key>
<string>lazysloths@yahoo.com</string>
</dict>
<dict>
<key>service</key>
<string>github</string>
<key>username</key>
<string>polichan</string>
</dict>
</array>
<key>avatarImage</key>
<string>Hexwell.png</string>
<key>creditPosition</key>
<string>iOS Developer</string>
<key>creditName</key>
<string>Hexwell</string>
<key>height</key>
<integer>84</integer>
<key>cellClass</key>
<string>NectraCreditCell</string>
</dict>
```
#### 头像类的声明应该如上面所示
```xml
<key>avatarImage</key>
<string>头像图片（含扩展名）</string>
<key>creditPosition</key>
<string>职位名称</string>
<key>creditName</key>
<string>展示的用户名</string>
<key>height</key>
<integer> Cell 高度 </integer>
<key>cellClass</key>
<string>NectraCreditCell</string>
```

## License
NectraCreditCell is available under the MIT license. See the LICENSE file for more info.

## Thanks
Thanks to @Dynastic Open Source this sophisticated Credit Cell in his TranslucentMessages project :)
