const char MAIN_page[] PROGMEM = R"=====(
  <html>
  <body>
  <form>
  <div style="padding-top:200px">
  <table width="20%" bgcolor="#20b2aa" align="center">

  <tr>
  <td colspan=2><center><font size=4><b>Smart Switch</b></font></center></td>
  </tr>

  <tr>
  <td>enter the ssid:</td>
  <td><input type="text" size=25 name="userid"></td>
  </tr>

  <tr>
  <td>Password:</td>
  <td><input type="Password" size=25 name="pwd"></td>
  </tr>
  <tr >
  <td><input  type="submit" onclick="check(this.form)" value="Submit"></td>
  </tr>
  </table>
  </div>
  </form>
  </body>
  </html>
)=====";
