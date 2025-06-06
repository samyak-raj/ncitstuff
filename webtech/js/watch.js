function clock(){
    let time = new Date();
    let hr = time.getHours();
    let min = time.getMinutes();
    let sec = time.getSeconds();
    let meri = "AM";
    if (hr > 12){
        hr = hr -12;
        meri = "PM";
    } 
    if (hr == 12){
        hr = 12;
    }
    if (min < 10){
        min = "0" + min;
    }
    if (sec < 10) {
        sec = "0" + sec;
    }
    if (hr < 10) {
        hr = "0" + hr;
    }

    let watch = hr + ":" + min + ":" + sec + ":" + meri;
    let a = document.getElementById("a");
    a.innerHTML = watch
}
setInterval(clock, 1000)