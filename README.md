## Arma3 Extension DB  C++ (windows / linux)

I got bored waiting on Arma 2017 / Epoch for Arma3.  
So i decided to write up an C++ Extension for Arma3server.

 
#### Known Public Missions / Mods using older extDB  
http://www.altisliferpg.com  
http://a3wasteland.com/  


#### Known Public Missions / Mods using extDB2
None  
  
  
### Features

 - ASync Support
 - Unique ID for Messages
 - Multi-Part Messages  
 - Rcon Support  
 - Steam VAC + Friends Queries  
 - RemoteTCP Support to send/receive text from extDB2  
 - Arma2 Legacy randomize configfile support  


### Supported Backends

 - MySQL
 - SQLite
 - Redis


#### Protocols

 - REDIS_RAW (Ability to whitelist allowed commands)
 - SQL_CUSTOM (Ability to define sql prepared statements in a .ini file)
 - SQL_RAW
 - LOG (Custom Logfiles)
 - MISC (has beguid, crc32, md4/5, time + time offset)
 - RCON (Ability to whitelist allowed commands)
 - STEAM (Ability to Query Steam for VAC Bans / Friend Info)


#### WIP

 - Improve TCPServer code Security wise  
 - Improve RCon Code
 - Improve Redis Support i.e exceptional handling + AUTH

  
#### Known Issues
 - https://github.com/Torndeco/extDB2/wiki/Known-Issues
  
  
#### Documentation @  
https://github.com/Torndeco/extDB2/wiki
  
  
#### Linux Requirements  
Linux Distro with Glibc 2.17 or higher  
Debian 8 / Centos 7 / Ubuntu 14.10  

#### Windows Requirements  
Windows Server 2008 + Later  
Windows 7 + Later  

Install vcredist_x86.exe  
http://www.microsoft.com/en-ie/download/details.aspx?id=40784  

#### Donation Link @  

https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=2SUEFTGABTAM2
 

#### Thanks to

 - [firefly2442](https://github.com/firefly2442) for the CMake Build System.
 - [MaHuJa](https://github.com/MaHuJa) for taking time to look over the code and fixing / improving the code.
 - [bladez-](https://github.com/bladez-) For code to encode BERcon packets from bercon.
 - [Fank](https://gist.github.com/Fank) for his code to convert SteamID to BEGUID. 
 - [Gabime](https://github.com/gabime) for Spdlog.
 - [rajkosto](https://github.com/rajkosto) for his work on DayZ Hive, using same code for parsering arma values.
 - killerty69 for fix loadbans after AutoBan player.
 - [killzonekid](http://killzonekid.com) for his blog.
 - [Tonic](https://github.com/TAWTonic) & Atlis RPG Admins for beening literally beening bleeding edge testers for extDB.   
