echo '#### Uploading files  ####'

#scp ./index.html ./style.css 01575855062@200.132.53.138: 

scp -r ./public_html 01575855062@200.132.53.138:
