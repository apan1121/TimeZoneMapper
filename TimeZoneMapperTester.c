#include <stdio.h>
#include <string.h>
#include "TimeZoneMapper.h"

int main(int argc, char* argv) {
    char const* timeZone;

    timeZone = latLngToTimezoneString(25.152240, 121.569398);
    printf("Time zone : %s\n", timeZone);

    timeZone = latLngToTimezoneString(36.861872, 139.601052);
    printf("Time zone : %s\n", timeZone);

    timeZone = latLngToTimezoneString(-11, -43);
    printf("Time zone : %s\n", timeZone);
    
    //America/Dominica
    timeZone = latLngToTimezoneString(15.414999, -61.37097600000001);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Dominica", timeZone) == 0) ? "PASS" : "FAIL (\"America/Dominica\")");
    //America/St_Vincent
    timeZone = latLngToTimezoneString(38.029644, -122.534422);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/St_Vincent", timeZone) == 0) ? "PASS" : "FAIL (\"America/St_Vincent\")");
    //Australia/Lord_Howe
    timeZone = latLngToTimezoneString(-31.5314822, 159.0701995);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Australia/Lord_Howe", timeZone) == 0) ? "PASS" : "FAIL (\"Australia/Lord_Howe\")");
    //Asia/Kashgar
    timeZone = latLngToTimezoneString(39.4704, 75.989755);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Kashgar", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Kashgar\")");
    //Pacific/Wallis
    timeZone = latLngToTimezoneString(-32.166988, 152.5012264);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Wallis", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Wallis\")");
    //Europe/Berlin
    timeZone = latLngToTimezoneString(52.52000659999999, 13.404954);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Berlin", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Berlin\")");
    //America/Manaus
    timeZone = latLngToTimezoneString(-3.1190275, -60.0217314);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Manaus", timeZone) == 0) ? "PASS" : "FAIL (\"America/Manaus\")");
    //Asia/Jerusalem
    timeZone = latLngToTimezoneString(31.768319, 35.21371);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Jerusalem", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Jerusalem\")");
    //America/Phoenix
    timeZone = latLngToTimezoneString(33.4483771, -112.0740373);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Phoenix", timeZone) == 0) ? "PASS" : "FAIL (\"America/Phoenix\")");
    //Australia/Darwin
    timeZone = latLngToTimezoneString(-12.4628271, 130.8417772);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Australia/Darwin", timeZone) == 0) ? "PASS" : "FAIL (\"Australia/Darwin\")");
    //Asia/Seoul
    timeZone = latLngToTimezoneString(37.566535, 126.9779692);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Seoul", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Seoul\")");
    //Africa/Gaborone
    timeZone = latLngToTimezoneString(-24.658056, 25.912222);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Gaborone", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Gaborone\")");
    //Indian/Chagos
    timeZone = latLngToTimezoneString(-6.000000000000001, 72);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Indian/Chagos", timeZone) == 0) ? "PASS" : "FAIL (\"Indian/Chagos\")");
    //America/Argentina/Mendoza
    timeZone = latLngToTimezoneString(-32.8894587, -68.8458386);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Argentina/Mendoza", timeZone) == 0) ? "PASS" : "FAIL (\"America/Argentina/Mendoza\")");
    //Asia/Hong_Kong
    timeZone = latLngToTimezoneString(22.396428, 114.109497);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Hong_Kong", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Hong_Kong\")");
    //America/Godthab
    timeZone = latLngToTimezoneString(64.175, -51.738889);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Godthab", timeZone) == 0) ? "PASS" : "FAIL (\"America/Godthab\")");
    //Africa/Dar_es_Salaam
    timeZone = latLngToTimezoneString(-6.8, 39.283333);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Dar_es_Salaam", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Dar_es_Salaam\")");
    //Pacific/Majuro
    /*
    { "results" : [], "status" : "ZERO_RESULTS" }
    */
    //America/Port-au-Prince
    timeZone = latLngToTimezoneString(31.9841624, -98.5019363);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Port-au-Prince", timeZone) == 0) ? "PASS" : "FAIL (\"America/Port-au-Prince\")");
    //America/Montreal
    timeZone = latLngToTimezoneString(46.42800330000001, -90.2460097);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Montreal", timeZone) == 0) ? "PASS" : "FAIL (\"America/Montreal\")");
    //Atlantic/Reykjavik
    timeZone = latLngToTimezoneString(64.133333, -21.933333);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Atlantic/Reykjavik", timeZone) == 0) ? "PASS" : "FAIL (\"Atlantic/Reykjavik\")");
    //America/Panama
    timeZone = latLngToTimezoneString(8.983333, -79.516667);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Panama", timeZone) == 0) ? "PASS" : "FAIL (\"America/Panama\")");
    //America/Sitka
    timeZone = latLngToTimezoneString(57.0530556, -135.33);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Sitka", timeZone) == 0) ? "PASS" : "FAIL (\"America/Sitka\")");
    //Asia/Ho_Chi_Minh
    timeZone = latLngToTimezoneString(10.8230989, 106.6296638);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Ho_Chi_Minh", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Ho_Chi_Minh\")");
    //America/Danmarkshavn
    /*
    { "results" : [], "status" : "ZERO_RESULTS" }
    */
    //Asia/Jakarta
    timeZone = latLngToTimezoneString(-6.2087634, 106.845599);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Jakarta", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Jakarta\")");
    //America/Boise
    timeZone = latLngToTimezoneString(43.6187102, -116.2146068);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Boise", timeZone) == 0) ? "PASS" : "FAIL (\"America/Boise\")");
    //Asia/Baghdad
    timeZone = latLngToTimezoneString(33.325, 44.422);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Baghdad", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Baghdad\")");
    //Africa/El_Aaiun
    timeZone = latLngToTimezoneString(27.1252867, -13.1625005);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/El_Aaiun", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/El_Aaiun\")");
    //Europe/Zagreb
    timeZone = latLngToTimezoneString(45.8150108, 15.981919);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Zagreb", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Zagreb\")");
    //America/Santiago
    timeZone = latLngToTimezoneString(-33.4488897, -70.6692655);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Santiago", timeZone) == 0) ? "PASS" : "FAIL (\"America/Santiago\")");
    //America/Merida
    timeZone = latLngToTimezoneString(8.6, -71.14999999999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Merida", timeZone) == 0) ? "PASS" : "FAIL (\"America/Merida\")");
    //Africa/Nouakchott
    timeZone = latLngToTimezoneString(18.1, -15.95);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Nouakchott", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Nouakchott\")");
    //America/Bahia_Banderas
    timeZone = latLngToTimezoneString(19.43851, -99.17452689999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Bahia_Banderas", timeZone) == 0) ? "PASS" : "FAIL (\"America/Bahia_Banderas\")");
    //Australia/Perth
    timeZone = latLngToTimezoneString(-31.9535132, 115.8570471);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Australia/Perth", timeZone) == 0) ? "PASS" : "FAIL (\"Australia/Perth\")");
    //Asia/Sakhalin
    timeZone = latLngToTimezoneString(49.9807847, 143.3738129);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Sakhalin", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Sakhalin\")");
    //Asia/Vladivostok
    timeZone = latLngToTimezoneString(43.133333, 131.9);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Vladivostok", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Vladivostok\")");
    //Africa/Bissau
    timeZone = latLngToTimezoneString(11.8816553, -15.6177942);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Bissau", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Bissau\")");
    //America/Los_Angeles
    timeZone = latLngToTimezoneString(34.0522342, -118.2436849);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Los_Angeles", timeZone) == 0) ? "PASS" : "FAIL (\"America/Los_Angeles\")");
    //Asia/Rangoon
    timeZone = latLngToTimezoneString(16.780833, 96.149722);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Rangoon", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Rangoon\")");
    //America/Belize
    timeZone = latLngToTimezoneString(-30.160131, -51.138543);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Belize", timeZone) == 0) ? "PASS" : "FAIL (\"America/Belize\")");
    //Asia/Harbin
    timeZone = latLngToTimezoneString(45.80377499999999, 126.534967);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Harbin", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Harbin\")");
    //Australia/Currie
    timeZone = latLngToTimezoneString(-39.9282417, 143.8523102);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Australia/Currie", timeZone) == 0) ? "PASS" : "FAIL (\"Australia/Currie\")");
    //Pacific/Pago_Pago
    timeZone = latLngToTimezoneString(-14.339775, -170.779722);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Pago_Pago", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Pago_Pago\")");
    //America/Vancouver
    timeZone = latLngToTimezoneString(45.6387281, -122.6614861);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Vancouver", timeZone) == 0) ? "PASS" : "FAIL (\"America/Vancouver\")");
    //Asia/Magadan
    timeZone = latLngToTimezoneString(59.566667, 150.8);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Magadan", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Magadan\")");
    //Asia/Tbilisi
    timeZone = latLngToTimezoneString(41.716667, 44.783333);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Tbilisi", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Tbilisi\")");
    //Asia/Yerevan
    timeZone = latLngToTimezoneString(40.183333, 44.516667);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Yerevan", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Yerevan\")");
    //Europe/Tallinn
    timeZone = latLngToTimezoneString(59.43696079999999, 24.7535746);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Tallinn", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Tallinn\")");
    //Pacific/Johnston
    timeZone = latLngToTimezoneString(37.8486609, -88.90732589999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Johnston", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Johnston\")");
    //Asia/Baku
    timeZone = latLngToTimezoneString(39.4040592, 45.57168129999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Baku", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Baku\")");
    //America/North_Dakota/New_Salem
    timeZone = latLngToTimezoneString(46.844999, -101.4112545);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/North_Dakota/New_Salem", timeZone) == 0) ? "PASS" : "FAIL (\"America/North_Dakota/New_Salem\")");
    //Europe/Vilnius
    timeZone = latLngToTimezoneString(54.6871555, 25.2796514);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Vilnius", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Vilnius\")");
    //America/Indiana/Petersburg
    timeZone = latLngToTimezoneString(38.4919935, -87.2786244);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Indiana/Petersburg", timeZone) == 0) ? "PASS" : "FAIL (\"America/Indiana/Petersburg\")");
    //Asia/Tehran
    timeZone = latLngToTimezoneString(35.5501285, 51.5150077);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Tehran", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Tehran\")");
    //America/Inuvik
    timeZone = latLngToTimezoneString(72.5926783, -121.0657788);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Inuvik", timeZone) == 0) ? "PASS" : "FAIL (\"America/Inuvik\")");
    //Europe/Lisbon
    timeZone = latLngToTimezoneString(38.7222524, -9.1393366);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Lisbon", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Lisbon\")");
    //Europe/Vatican
    timeZone = latLngToTimezoneString(41.902916, 12.453389);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Vatican", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Vatican\")");
    //Pacific/Chatham
    timeZone = latLngToTimezoneString(46.3178487, -124.007096);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Chatham", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Chatham\")");
    //Antarctica/Macquarie
    /*
    { "results" : [], "status" : "ZERO_RESULTS" }
    */
    //America/Araguaina
    timeZone = latLngToTimezoneString(-7.192773300000001, -48.20482699999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Araguaina", timeZone) == 0) ? "PASS" : "FAIL (\"America/Araguaina\")");
    //Asia/Thimphu
    timeZone = latLngToTimezoneString(27.4727924, 89.6392863);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Thimphu", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Thimphu\")");
    //Atlantic/Madeira
    timeZone = latLngToTimezoneString(32.76070740000001, -16.9594723);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Atlantic/Madeira", timeZone) == 0) ? "PASS" : "FAIL (\"Atlantic/Madeira\")");
    //America/Coral_Harbour
    timeZone = latLngToTimezoneString(29.4389379, -98.6961901);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Coral_Harbour", timeZone) == 0) ? "PASS" : "FAIL (\"America/Coral_Harbour\")");
    //Pacific/Funafuti
    timeZone = latLngToTimezoneString(-8.515975, 179.1994215);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Funafuti", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Funafuti\")");
    //Indian/Mahe
    timeZone = latLngToTimezoneString(11.7126439, 75.54577479999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Indian/Mahe", timeZone) == 0) ? "PASS" : "FAIL (\"Indian/Mahe\")");
    //Australia/Adelaide
    timeZone = latLngToTimezoneString(-34.92862119999999, 138.5999594);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Australia/Adelaide", timeZone) == 0) ? "PASS" : "FAIL (\"Australia/Adelaide\")");
    //Africa/Freetown
    timeZone = latLngToTimezoneString(8.484444, -13.234444);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Freetown", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Freetown\")");
    //Atlantic/South_Georgia
    timeZone = latLngToTimezoneString(39.3562399, -74.4401061);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Atlantic/South_Georgia", timeZone) == 0) ? "PASS" : "FAIL (\"Atlantic/South_Georgia\")");
    //Africa/Accra
    timeZone = latLngToTimezoneString(5.55, -0.2);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Accra", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Accra\")");
    //America/North_Dakota/Beulah
    timeZone = latLngToTimezoneString(47.2633403, -101.7779462);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/North_Dakota/Beulah", timeZone) == 0) ? "PASS" : "FAIL (\"America/North_Dakota/Beulah\")");
    //America/Jamaica
    timeZone = latLngToTimezoneString(40.702677, -73.7889689);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Jamaica", timeZone) == 0) ? "PASS" : "FAIL (\"America/Jamaica\")");
    //America/Scoresbysund
    /*
    { "results" : [], "status" : "ZERO_RESULTS" }
    */
    //America/Swift_Current
    timeZone = latLngToTimezoneString(50.285069, -107.7971722);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Swift_Current", timeZone) == 0) ? "PASS" : "FAIL (\"America/Swift_Current\")");
    //Europe/Tirane
    timeZone = latLngToTimezoneString(41.3275459, 19.8186982);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Tirane", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Tirane\")");
    //Asia/Ashgabat
    timeZone = latLngToTimezoneString(37.933333, 58.366667);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Ashgabat", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Ashgabat\")");
    //America/Moncton
    timeZone = latLngToTimezoneString(46.0878165, -64.7782313);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Moncton", timeZone) == 0) ? "PASS" : "FAIL (\"America/Moncton\")");
    //Europe/Vaduz
    timeZone = latLngToTimezoneString(47.14136999999999, 9.5207);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Vaduz", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Vaduz\")");
    //Australia/Eucla
    timeZone = latLngToTimezoneString(-31.677126, 128.8893043);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Australia/Eucla", timeZone) == 0) ? "PASS" : "FAIL (\"Australia/Eucla\")");
    //America/Montserrat
    timeZone = latLngToTimezoneString(38.7747347, -93.62188069999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Montserrat", timeZone) == 0) ? "PASS" : "FAIL (\"America/Montserrat\")");
    //America/Glace_Bay
    timeZone = latLngToTimezoneString(33.3606649, -79.93855260000001);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Glace_Bay", timeZone) == 0) ? "PASS" : "FAIL (\"America/Glace_Bay\")");
    //Atlantic/Stanley
    timeZone = latLngToTimezoneString(39.4117818, -74.58758399999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Atlantic/Stanley", timeZone) == 0) ? "PASS" : "FAIL (\"Atlantic/Stanley\")");
    //Africa/Bujumbura
    timeZone = latLngToTimezoneString(-3.383333, 29.366667);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Bujumbura", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Bujumbura\")");
    //Africa/Porto-Novo
    timeZone = latLngToTimezoneString(6.497222, 2.605);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Porto-Novo", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Porto-Novo\")");
    //America/Argentina/Rio_Gallegos
    timeZone = latLngToTimezoneString(-51.6230485, -69.2168291);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Argentina/Rio_Gallegos", timeZone) == 0) ? "PASS" : "FAIL (\"America/Argentina/Rio_Gallegos\")");
    //America/Grenada
    timeZone = latLngToTimezoneString(33.7690049, -89.8084192);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Grenada", timeZone) == 0) ? "PASS" : "FAIL (\"America/Grenada\")");
    //Asia/Novokuznetsk
    timeZone = latLngToTimezoneString(53.7595935, 87.12157049999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Novokuznetsk", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Novokuznetsk\")");
    //America/Argentina/Catamarca
    timeZone = latLngToTimezoneString(-28.469581, -65.7795441);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Argentina/Catamarca", timeZone) == 0) ? "PASS" : "FAIL (\"America/Argentina/Catamarca\")");
    //America/Indiana/Indianapolis
    timeZone = latLngToTimezoneString(39.768403, -86.158068);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Indiana/Indianapolis", timeZone) == 0) ? "PASS" : "FAIL (\"America/Indiana/Indianapolis\")");
    //America/Indiana/Tell_City
    timeZone = latLngToTimezoneString(37.9514447, -86.76776629999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Indiana/Tell_City", timeZone) == 0) ? "PASS" : "FAIL (\"America/Indiana/Tell_City\")");
    //America/Curacao
    timeZone = latLngToTimezoneString(12.16957, -68.99002);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Curacao", timeZone) == 0) ? "PASS" : "FAIL (\"America/Curacao\")");
    //America/Miquelon
    timeZone = latLngToTimezoneString(-31.4853993, -64.2469306);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Miquelon", timeZone) == 0) ? "PASS" : "FAIL (\"America/Miquelon\")");
    //America/Detroit
    timeZone = latLngToTimezoneString(42.331427, -83.0457538);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Detroit", timeZone) == 0) ? "PASS" : "FAIL (\"America/Detroit\")");
    //America/Menominee
    timeZone = latLngToTimezoneString(45.10776269999999, -87.6142737);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Menominee", timeZone) == 0) ? "PASS" : "FAIL (\"America/Menominee\")");
    //Asia/Novosibirsk
    timeZone = latLngToTimezoneString(55.00835259999999, 82.9357327);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Novosibirsk", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Novosibirsk\")");
    //Africa/Lagos
    timeZone = latLngToTimezoneString(6.5243793, 3.3792057);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Lagos", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Lagos\")");
    //Indian/Cocos
    timeZone = latLngToTimezoneString(33.7748883, -116.4422416);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Indian/Cocos", timeZone) == 0) ? "PASS" : "FAIL (\"Indian/Cocos\")");
    //America/Yakutat
    timeZone = latLngToTimezoneString(59.54694439999999, -139.7272222);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Yakutat", timeZone) == 0) ? "PASS" : "FAIL (\"America/Yakutat\")");
    //Europe/Volgograd
    timeZone = latLngToTimezoneString(48.7, 44.516667);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Volgograd", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Volgograd\")");
    //Asia/Qatar
    timeZone = latLngToTimezoneString(25.354826, 51.183884);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Qatar", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Qatar\")");
    //Indian/Antananarivo
    timeZone = latLngToTimezoneString(-18.933333, 47.516667);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Indian/Antananarivo", timeZone) == 0) ? "PASS" : "FAIL (\"Indian/Antananarivo\")");
    //Pacific/Marquesas
    timeZone = latLngToTimezoneString(-9.454443999999999, -139.388889);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Marquesas", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Marquesas\")");
    //America/Grand_Turk
    timeZone = latLngToTimezoneString(37.7766635, -107.6956176);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Grand_Turk", timeZone) == 0) ? "PASS" : "FAIL (\"America/Grand_Turk\")");
    //Asia/Khandyga
    timeZone = latLngToTimezoneString(62.65640789999999, 135.5539801);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Khandyga", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Khandyga\")");
    //America/North_Dakota/Center
    timeZone = latLngToTimezoneString(47.1112172, -101.2399164);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/North_Dakota/Center", timeZone) == 0) ? "PASS" : "FAIL (\"America/North_Dakota/Center\")");
    //Pacific/Guam
    timeZone = latLngToTimezoneString(13.5598004, 144.9110949);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Guam", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Guam\")");
    //Pacific/Pitcairn
    timeZone = latLngToTimezoneString(-27.9370265, 153.310154);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Pitcairn", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Pitcairn\")");
    //America/Cambridge_Bay
    timeZone = latLngToTimezoneString(38.58389570000001, -76.08206799999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Cambridge_Bay", timeZone) == 0) ? "PASS" : "FAIL (\"America/Cambridge_Bay\")");
    //Asia/Bahrain
    timeZone = latLngToTimezoneString(26.0667, 50.5577);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Bahrain", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Bahrain\")");
    //America/Kentucky/Monticello
    timeZone = latLngToTimezoneString(36.8297937, -84.8491126);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Kentucky/Monticello", timeZone) == 0) ? "PASS" : "FAIL (\"America/Kentucky/Monticello\")");
    //Arctic/Longyearbyen
    timeZone = latLngToTimezoneString(78.22, 15.65);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Arctic/Longyearbyen", timeZone) == 0) ? "PASS" : "FAIL (\"Arctic/Longyearbyen\")");
    //Africa/Cairo
    timeZone = latLngToTimezoneString(30.0444196, 31.2357116);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Cairo", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Cairo\")");
    //Australia/Hobart
    timeZone = latLngToTimezoneString(-42.8819032, 147.3238148);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Australia/Hobart", timeZone) == 0) ? "PASS" : "FAIL (\"Australia/Hobart\")");
    //Pacific/Galapagos
    timeZone = latLngToTimezoneString(-27.9420393, 153.3317831);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Galapagos", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Galapagos\")");
    //Asia/Oral
    timeZone = latLngToTimezoneString(51.227821, 51.3865431);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Oral", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Oral\")");
    //America/Dawson_Creek
    timeZone = latLngToTimezoneString(40.087445, -79.633865);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Dawson_Creek", timeZone) == 0) ? "PASS" : "FAIL (\"America/Dawson_Creek\")");
    //Africa/Mbabane
    timeZone = latLngToTimezoneString(-26.316667, 31.133333);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Mbabane", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Mbabane\")");
    //America/Halifax
    timeZone = latLngToTimezoneString(41.99121299999999, -70.86198499999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Halifax", timeZone) == 0) ? "PASS" : "FAIL (\"America/Halifax\")");
    //Pacific/Tongatapu
    timeZone = latLngToTimezoneString(-21.1839516, -175.2197725);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Tongatapu", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Tongatapu\")");
    //Asia/Aqtau
    timeZone = latLngToTimezoneString(43.6410973, 51.1985113);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Aqtau", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Aqtau\")");
    //Asia/Hovd
    timeZone = latLngToTimezoneString(48.004167, 91.65);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Hovd", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Hovd\")");
    //uninhabited
    /*
    { "exclude_from_slo" : true, "results" : [], "status" : "ZERO_RESULTS" }
    */
    //Africa/Nairobi
    timeZone = latLngToTimezoneString(-1.2920659, 36.8219462);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Nairobi", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Nairobi\")");
    //Asia/Ulaanbaatar
    timeZone = latLngToTimezoneString(47.91999999999999, 106.92);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Ulaanbaatar", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Ulaanbaatar\")");
    //Indian/Christmas
    timeZone = latLngToTimezoneString(45.2562704, -66.0760651);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Indian/Christmas", timeZone) == 0) ? "PASS" : "FAIL (\"Indian/Christmas\")");
    //Asia/Taipei
    timeZone = latLngToTimezoneString(25.0329694, 121.5654177);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Taipei", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Taipei\")");
    //Australia/Melbourne
    timeZone = latLngToTimezoneString(-37.814107, 144.96328);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Australia/Melbourne", timeZone) == 0) ? "PASS" : "FAIL (\"Australia/Melbourne\")");
    //America/Argentina/Salta
    timeZone = latLngToTimezoneString(-24.7830773, -65.4103739);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Argentina/Salta", timeZone) == 0) ? "PASS" : "FAIL (\"America/Argentina/Salta\")");
    //Australia/Broken_Hill
    timeZone = latLngToTimezoneString(-31.9558583, 141.4651361);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Australia/Broken_Hill", timeZone) == 0) ? "PASS" : "FAIL (\"Australia/Broken_Hill\")");
    //America/Argentina/Tucuman
    timeZone = latLngToTimezoneString(-26.8082848, -65.2175903);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Argentina/Tucuman", timeZone) == 0) ? "PASS" : "FAIL (\"America/Argentina/Tucuman\")");
    //America/Kentucky/Louisville
    timeZone = latLngToTimezoneString(38.2526647, -85.7584557);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Kentucky/Louisville", timeZone) == 0) ? "PASS" : "FAIL (\"America/Kentucky/Louisville\")");
    //Asia/Jayapura
    timeZone = latLngToTimezoneString(-7.4844073, 107.2843726);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Jayapura", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Jayapura\")");
    //Asia/Macau
    timeZone = latLngToTimezoneString(22.198745, 113.543873);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Macau", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Macau\")");
    //America/Ojinaga
    timeZone = latLngToTimezoneString(29.56444399999999, -104.416389);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Ojinaga", timeZone) == 0) ? "PASS" : "FAIL (\"America/Ojinaga\")");
    //America/Nome
    timeZone = latLngToTimezoneString(64.5011111, -165.4063889);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Nome", timeZone) == 0) ? "PASS" : "FAIL (\"America/Nome\")");
    //Pacific/Wake
    timeZone = latLngToTimezoneString(35.8444731, -78.6117402);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Wake", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Wake\")");
    //Europe/Andorra
    timeZone = latLngToTimezoneString(42.506285, 1.521801);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Andorra", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Andorra\")");
    //America/Iqaluit
    timeZone = latLngToTimezoneString(63.74669300000001, -68.5169669);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Iqaluit", timeZone) == 0) ? "PASS" : "FAIL (\"America/Iqaluit\")");
    //America/Kralendijk
    timeZone = latLngToTimezoneString(12.1507, -68.27669999999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Kralendijk", timeZone) == 0) ? "PASS" : "FAIL (\"America/Kralendijk\")");
    //Europe/Jersey
    timeZone = latLngToTimezoneString(49.214439, -2.13125);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Jersey", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Jersey\")");
    //Asia/Ust-Nera
    timeZone = latLngToTimezoneString(64.5596103, 143.2244253);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Ust-Nera", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Ust-Nera\")");
    //Asia/Yakutsk
    timeZone = latLngToTimezoneString(62.03333299999999, 129.733333);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Yakutsk", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Yakutsk\")");
    //America/Yellowknife
    timeZone = latLngToTimezoneString(64.9235289, -148.2125295);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Yellowknife", timeZone) == 0) ? "PASS" : "FAIL (\"America/Yellowknife\")");
    //America/Fortaleza
    timeZone = latLngToTimezoneString(-3.7318616, -38.5266704);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Fortaleza", timeZone) == 0) ? "PASS" : "FAIL (\"America/Fortaleza\")");
    //Asia/Irkutsk
    timeZone = latLngToTimezoneString(52.28697409999999, 104.3050183);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Irkutsk", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Irkutsk\")");
    //America/Tegucigalpa
    timeZone = latLngToTimezoneString(14.0531441, -87.2253633);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Tegucigalpa", timeZone) == 0) ? "PASS" : "FAIL (\"America/Tegucigalpa\")");
    //Europe/Zaporozhye
    timeZone = latLngToTimezoneString(47.8388, 35.139567);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Zaporozhye", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Zaporozhye\")");
    //Pacific/Fiji
    timeZone = latLngToTimezoneString(-18.1417202, 178.423883);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Fiji", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Fiji\")");
    //Pacific/Tarawa
    timeZone = latLngToTimezoneString(32.6743606, -117.1647542);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Tarawa", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Tarawa\")");
    //Africa/Asmara
    timeZone = latLngToTimezoneString(15.333333, 38.933333);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Asmara", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Asmara\")");
    //Asia/Dhaka
    timeZone = latLngToTimezoneString(23.810332, 90.4125181);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Dhaka", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Dhaka\")");
    //Asia/Pyongyang
    timeZone = latLngToTimezoneString(39.0392193, 125.7625241);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Pyongyang", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Pyongyang\")");
    //Europe/Athens
    timeZone = latLngToTimezoneString(37.983917, 23.7293599);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Athens", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Athens\")");
    //America/Resolute
    timeZone = latLngToTimezoneString(61.9652085, -150.0790446);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Resolute", timeZone) == 0) ? "PASS" : "FAIL (\"America/Resolute\")");
    //Africa/Brazzaville
    timeZone = latLngToTimezoneString(-4.267778, 15.291944);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Brazzaville", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Brazzaville\")");
    //Africa/Libreville
    timeZone = latLngToTimezoneString(0.3901, 9.4544);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Libreville", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Libreville\")");
    //Atlantic/St_Helena
    timeZone = latLngToTimezoneString(43.1695372, -77.5997435);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Atlantic/St_Helena", timeZone) == 0) ? "PASS" : "FAIL (\"Atlantic/St_Helena\")");
    //Europe/Samara
    timeZone = latLngToTimezoneString(53.202778, 50.140833);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Samara", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Samara\")");
    //America/Adak
    timeZone = latLngToTimezoneString(51.88, -176.6580556);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Adak", timeZone) == 0) ? "PASS" : "FAIL (\"America/Adak\")");
    //America/Argentina/Jujuy
    timeZone = latLngToTimezoneString(-24.1857864, -65.2994767);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Argentina/Jujuy", timeZone) == 0) ? "PASS" : "FAIL (\"America/Argentina/Jujuy\")");
    //America/Chicago
    timeZone = latLngToTimezoneString(41.8781136, -87.6297982);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Chicago", timeZone) == 0) ? "PASS" : "FAIL (\"America/Chicago\")");
    //Africa/Sao_Tome
    timeZone = latLngToTimezoneString(0.3301924, 6.733343);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Sao_Tome", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Sao_Tome\")");
    //Europe/Bratislava
    timeZone = latLngToTimezoneString(48.1458923, 17.1071373);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Bratislava", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Bratislava\")");
    //Asia/Riyadh
    timeZone = latLngToTimezoneString(24.633333, 46.716667);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Riyadh", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Riyadh\")");
    //America/Lima
    timeZone = latLngToTimezoneString(-12.046374, -77.0427934);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Lima", timeZone) == 0) ? "PASS" : "FAIL (\"America/Lima\")");
    //America/New_York
    timeZone = latLngToTimezoneString(40.7127837, -74.0059413);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/New_York", timeZone) == 0) ? "PASS" : "FAIL (\"America/New_York\")");
    //America/Pangnirtung
    /*
    { "results" : [], "status" : "ZERO_RESULTS" }
    */
    //Asia/Samarkand
    timeZone = latLngToTimezoneString(39.6542, 66.9597);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Samarkand", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Samarkand\")");
    //America/Port_of_Spain
    timeZone = latLngToTimezoneString(10.666667, -61.51666700000001);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Port_of_Spain", timeZone) == 0) ? "PASS" : "FAIL (\"America/Port_of_Spain\")");
    //Africa/Johannesburg
    timeZone = latLngToTimezoneString(-26.2041028, 28.0473051);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Johannesburg", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Johannesburg\")");
    //Pacific/Port_Moresby
    timeZone = latLngToTimezoneString(-9.4780733, 147.1494647);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Port_Moresby", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Port_Moresby\")");
    //America/Bahia
    timeZone = latLngToTimezoneString(-12.579738, -41.7007272);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Bahia", timeZone) == 0) ? "PASS" : "FAIL (\"America/Bahia\")");
    //Europe/Zurich
    timeZone = latLngToTimezoneString(47.3686498, 8.539182499999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Zurich", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Zurich\")");
    //America/St_Barthelemy
    timeZone = latLngToTimezoneString(41.14120459999999, -78.7202808);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/St_Barthelemy", timeZone) == 0) ? "PASS" : "FAIL (\"America/St_Barthelemy\")");
    //Asia/Nicosia
    timeZone = latLngToTimezoneString(35.166667, 33.366667);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Nicosia", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Nicosia\")");
    //Europe/Kaliningrad
    timeZone = latLngToTimezoneString(54.716667, 20.516667);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Kaliningrad", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Kaliningrad\")");
    //America/Anguilla
    timeZone = latLngToTimezoneString(32.97401550000001, -90.82454369999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Anguilla", timeZone) == 0) ? "PASS" : "FAIL (\"America/Anguilla\")");
    //Europe/Ljubljana
    timeZone = latLngToTimezoneString(46.0569465, 14.5057515);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Ljubljana", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Ljubljana\")");
    //Asia/Yekaterinburg
    timeZone = latLngToTimezoneString(56.83892609999999, 60.6057025);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Yekaterinburg", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Yekaterinburg\")");
    //Africa/Kampala
    timeZone = latLngToTimezoneString(0.313611, 32.581111);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Kampala", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Kampala\")");
    //America/Rio_Branco
    timeZone = latLngToTimezoneString(-9.975377, -67.8248977);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Rio_Branco", timeZone) == 0) ? "PASS" : "FAIL (\"America/Rio_Branco\")");
    //Africa/Bamako
    timeZone = latLngToTimezoneString(12.65, -8);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Bamako", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Bamako\")");
    //America/Goose_Bay
    timeZone = latLngToTimezoneString(61.394451, -149.84555);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Goose_Bay", timeZone) == 0) ? "PASS" : "FAIL (\"America/Goose_Bay\")");
    //Europe/Moscow
    timeZone = latLngToTimezoneString(55.755826, 37.6173);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Moscow", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Moscow\")");
    //Africa/Conakry
    timeZone = latLngToTimezoneString(9.509167, -13.712222);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Conakry", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Conakry\")");
    //America/Chihuahua
    timeZone = latLngToTimezoneString(30.1631794, -107.8080784);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Chihuahua", timeZone) == 0) ? "PASS" : "FAIL (\"America/Chihuahua\")");
    //Europe/Warsaw
    timeZone = latLngToTimezoneString(52.2296756, 21.0122287);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Warsaw", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Warsaw\")");
    //Pacific/Palau
    timeZone = latLngToTimezoneString(7.312714999999999, 134.4464725);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Palau", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Palau\")");
    //Europe/Mariehamn
    timeZone = latLngToTimezoneString(60.0970945, 19.9348339);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Mariehamn", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Mariehamn\")");
    //Africa/Windhoek
    timeZone = latLngToTimezoneString(-22.57, 17.083611);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Windhoek", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Windhoek\")");
    //America/La_Paz
    timeZone = latLngToTimezoneString(-16.5, -68.14999999999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/La_Paz", timeZone) == 0) ? "PASS" : "FAIL (\"America/La_Paz\")");
    //America/Recife
    timeZone = latLngToTimezoneString(-8.0578381, -34.8828969);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Recife", timeZone) == 0) ? "PASS" : "FAIL (\"America/Recife\")");
    //America/Mexico_City
    timeZone = latLngToTimezoneString(39.1730652, -91.887271);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Mexico_City", timeZone) == 0) ? "PASS" : "FAIL (\"America/Mexico_City\")");
    //Asia/Amman
    timeZone = latLngToTimezoneString(31.9565783, 35.9456951);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Amman", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Amman\")");
    //America/Tijuana
    timeZone = latLngToTimezoneString(32.51798590000001, -117.0198237);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Tijuana", timeZone) == 0) ? "PASS" : "FAIL (\"America/Tijuana\")");
    //America/Metlakatla
    timeZone = latLngToTimezoneString(55.1291667, -131.5722222);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Metlakatla", timeZone) == 0) ? "PASS" : "FAIL (\"America/Metlakatla\")");
    //Pacific/Midway
    timeZone = latLngToTimezoneString(36.0272446, -114.9876798);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Midway", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Midway\")");
    //Europe/Simferopol
    timeZone = latLngToTimezoneString(44.952117, 34.102417);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Simferopol", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Simferopol\")");
    //Europe/Budapest
    timeZone = latLngToTimezoneString(47.497912, 19.040235);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Budapest", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Budapest\")");
    //Pacific/Apia
    timeZone = latLngToTimezoneString(-13.8330307, -171.7697892);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Apia", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Apia\")");
    //America/Paramaribo
    timeZone = latLngToTimezoneString(5.8520355, -55.2038278);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Paramaribo", timeZone) == 0) ? "PASS" : "FAIL (\"America/Paramaribo\")");
    //Africa/Malabo
    timeZone = latLngToTimezoneString(3.75, 8.783332999999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Malabo", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Malabo\")");
    //Africa/Ndjamena
    timeZone = latLngToTimezoneString(12.113056, 15.049167);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Ndjamena", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Ndjamena\")");
    //Asia/Choibalsan
    timeZone = latLngToTimezoneString(48.07833300000001, 114.535);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Choibalsan", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Choibalsan\")");
    //America/Antigua
    timeZone = latLngToTimezoneString(29.645166, -98.4273139);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Antigua", timeZone) == 0) ? "PASS" : "FAIL (\"America/Antigua\")");
    //Europe/Istanbul
    timeZone = latLngToTimezoneString(41.0082376, 28.9783589);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Istanbul", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Istanbul\")");
    //Africa/Blantyre
    timeZone = latLngToTimezoneString(-15.786111, 35.005833);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Blantyre", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Blantyre\")");
    //Australia/Sydney
    timeZone = latLngToTimezoneString(-33.8674869, 151.2069902);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Australia/Sydney", timeZone) == 0) ? "PASS" : "FAIL (\"Australia/Sydney\")");
    //Asia/Dushanbe
    timeZone = latLngToTimezoneString(38.536667, 68.78);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Dushanbe", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Dushanbe\")");
    //Europe/Belgrade
    timeZone = latLngToTimezoneString(44.786568, 20.4489216);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Belgrade", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Belgrade\")");
    //Asia/Karachi
    timeZone = latLngToTimezoneString(24.8614622, 67.0099388);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Karachi", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Karachi\")");
    //Europe/Luxembourg
    timeZone = latLngToTimezoneString(49.815273, 6.129582999999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Luxembourg", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Luxembourg\")");
    //Europe/Podgorica
    timeZone = latLngToTimezoneString(42.441286, 19.262892);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Podgorica", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Podgorica\")");
    //Australia/Lindeman
    timeZone = latLngToTimezoneString(-19.2932843, 146.755763);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Australia/Lindeman", timeZone) == 0) ? "PASS" : "FAIL (\"Australia/Lindeman\")");
    //Africa/Bangui
    timeZone = latLngToTimezoneString(4.366667, 18.583333);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Bangui", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Bangui\")");
    //Asia/Aden
    timeZone = latLngToTimezoneString(12.8, 45.03333300000001);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Aden", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Aden\")");
    //Pacific/Chuuk
    timeZone = latLngToTimezoneString(7.464786200000001, 151.8490118);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Chuuk", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Chuuk\")");
    //Asia/Brunei
    timeZone = latLngToTimezoneString(4.535277, 114.727669);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Brunei", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Brunei\")");
    //Indian/Comoro
    /*
    { "exclude_from_slo" : true, "results" : [], "status" : "ZERO_RESULTS" }
    */
    //America/Asuncion
    timeZone = latLngToTimezoneString(-25.282197, -57.63509999999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Asuncion", timeZone) == 0) ? "PASS" : "FAIL (\"America/Asuncion\")");
    //Europe/Prague
    timeZone = latLngToTimezoneString(50.0755381, 14.4378005);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Prague", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Prague\")");
    //America/Cayman
    timeZone = latLngToTimezoneString(37.9906004, -122.231814);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Cayman", timeZone) == 0) ? "PASS" : "FAIL (\"America/Cayman\")");
    //Pacific/Pohnpei
    timeZone = latLngToTimezoneString(6.9661144, 158.2042354);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Pohnpei", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Pohnpei\")");
    //America/Atikokan
    timeZone = latLngToTimezoneString(48.7597531, -91.6181716);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Atikokan", timeZone) == 0) ? "PASS" : "FAIL (\"America/Atikokan\")");
    //Pacific/Norfolk
    timeZone = latLngToTimezoneString(36.8407578, -76.34329029999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Norfolk", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Norfolk\")");
    //Africa/Dakar
    timeZone = latLngToTimezoneString(14.7645042, -17.3660286);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Dakar", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Dakar\")");
    //America/Argentina/Buenos_Aires
    timeZone = latLngToTimezoneString(-34.6036844, -58.3815591);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Argentina/Buenos_Aires", timeZone) == 0) ? "PASS" : "FAIL (\"America/Argentina/Buenos_Aires\")");
    //America/Edmonton
    timeZone = latLngToTimezoneString(36.9800563, -85.61219059999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Edmonton", timeZone) == 0) ? "PASS" : "FAIL (\"America/Edmonton\")");
    //America/Barbados
    timeZone = latLngToTimezoneString(13.193887, -59.543198);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Barbados", timeZone) == 0) ? "PASS" : "FAIL (\"America/Barbados\")");
    //America/Santo_Domingo
    timeZone = latLngToTimezoneString(35.5147562, -106.3658588);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Santo_Domingo", timeZone) == 0) ? "PASS" : "FAIL (\"America/Santo_Domingo\")");
    //Asia/Bishkek
    timeZone = latLngToTimezoneString(42.874722, 74.61222200000002);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Bishkek", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Bishkek\")");
    //Asia/Kuwait
    timeZone = latLngToTimezoneString(29.31166, 47.481766);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Kuwait", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Kuwait\")");
    //Pacific/Efate
    timeZone = latLngToTimezoneString(-17.6577479, 168.4297187);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Efate", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Efate\")");
    //Indian/Mauritius
    timeZone = latLngToTimezoneString(-20.2272478, 57.5028706);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Indian/Mauritius", timeZone) == 0) ? "PASS" : "FAIL (\"Indian/Mauritius\")");
    //America/Aruba
    timeZone = latLngToTimezoneString(12.52111, -69.968338);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Aruba", timeZone) == 0) ? "PASS" : "FAIL (\"America/Aruba\")");
    //Australia/Brisbane
    timeZone = latLngToTimezoneString(-27.4710107, 153.0234489);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Australia/Brisbane", timeZone) == 0) ? "PASS" : "FAIL (\"Australia/Brisbane\")");
    //Indian/Kerguelen
    timeZone = latLngToTimezoneString(-49.3948275, 69.35446259999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Indian/Kerguelen", timeZone) == 0) ? "PASS" : "FAIL (\"Indian/Kerguelen\")");
    //Pacific/Kiritimati
    /*
    { "exclude_from_slo" : true, "results" : [], "status" : "ZERO_RESULTS" }
    */
    //America/Toronto
    timeZone = latLngToTimezoneString(40.4642335, -80.60090579999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Toronto", timeZone) == 0) ? "PASS" : "FAIL (\"America/Toronto\")");
    //Asia/Qyzylorda
    timeZone = latLngToTimezoneString(44.84883139999999, 65.4822686);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Qyzylorda", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Qyzylorda\")");
    //Asia/Aqtobe
    timeZone = latLngToTimezoneString(50.2839339, 57.166978);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Aqtobe", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Aqtobe\")");
    //America/Eirunepe
    timeZone = latLngToTimezoneString(-6.657140099999999, -69.8667141);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Eirunepe", timeZone) == 0) ? "PASS" : "FAIL (\"America/Eirunepe\")");
    //Europe/Isle_of_Man
    timeZone = latLngToTimezoneString(54.236107, -4.548056);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Isle_of_Man", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Isle_of_Man\")");
    //America/Blanc-Sablon
    /*
    { "results" : [], "status" : "ZERO_RESULTS" }
    */
    //Pacific/Honolulu
    timeZone = latLngToTimezoneString(21.3156533, -157.8718903);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Honolulu", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Honolulu\")");
    //America/Montevideo
    timeZone = latLngToTimezoneString(-34.9011127, -56.16453139999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Montevideo", timeZone) == 0) ? "PASS" : "FAIL (\"America/Montevideo\")");
    //Asia/Tashkent
    timeZone = latLngToTimezoneString(41.266667, 69.216667);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Tashkent", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Tashkent\")");
    //Pacific/Kosrae
    timeZone = latLngToTimezoneString(-27.9469353, 153.3155687);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Kosrae", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Kosrae\")");
    //America/Indiana/Winamac
    timeZone = latLngToTimezoneString(41.0514299, -86.6030648);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Indiana/Winamac", timeZone) == 0) ? "PASS" : "FAIL (\"America/Indiana/Winamac\")");
    //America/Argentina/La_Rioja
    timeZone = latLngToTimezoneString(-29.4134538, -66.8564579);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Argentina/La_Rioja", timeZone) == 0) ? "PASS" : "FAIL (\"America/Argentina/La_Rioja\")");
    //Africa/Mogadishu
    timeZone = latLngToTimezoneString(2.033333, 45.35);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Mogadishu", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Mogadishu\")");
    //Asia/Phnom_Penh
    timeZone = latLngToTimezoneString(11.5448729, 104.8921668);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Phnom_Penh", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Phnom_Penh\")");
    //Africa/Banjul
    timeZone = latLngToTimezoneString(13.453056, -16.5775);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Banjul", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Banjul\")");
    //America/Creston
    timeZone = latLngToTimezoneString(41.0586002, -94.3613474);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Creston", timeZone) == 0) ? "PASS" : "FAIL (\"America/Creston\")");
    //Europe/Brussels
    timeZone = latLngToTimezoneString(50.8503396, 4.3517103);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Brussels", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Brussels\")");
    //Asia/Gaza
    timeZone = latLngToTimezoneString(31.522561, 34.453593);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Gaza", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Gaza\")");
    //Atlantic/Bermuda
    timeZone = latLngToTimezoneString(37.2942589, -77.304022);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Atlantic/Bermuda", timeZone) == 0) ? "PASS" : "FAIL (\"Atlantic/Bermuda\")");
    //America/Indiana/Knox
    timeZone = latLngToTimezoneString(41.2958751, -86.6250139);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Indiana/Knox", timeZone) == 0) ? "PASS" : "FAIL (\"America/Indiana/Knox\")");
    //America/El_Salvador
    timeZone = latLngToTimezoneString(-12.9730401, -38.502304);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/El_Salvador", timeZone) == 0) ? "PASS" : "FAIL (\"America/El_Salvador\")");
    //America/Managua
    timeZone = latLngToTimezoneString(-34.6335246, -58.8553512);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Managua", timeZone) == 0) ? "PASS" : "FAIL (\"America/Managua\")");
    //Africa/Niamey
    timeZone = latLngToTimezoneString(13.521389, 2.105278);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Niamey", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Niamey\")");
    //Europe/Monaco
    timeZone = latLngToTimezoneString(43.73841760000001, 7.424615799999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Monaco", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Monaco\")");
    //Africa/Ouagadougou
    timeZone = latLngToTimezoneString(12.35, -1.516667);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Ouagadougou", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Ouagadougou\")");
    //Pacific/Easter
    timeZone = latLngToTimezoneString(-27.9479294, 153.3191472);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Easter", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Easter\")");
    //Atlantic/Canary
    timeZone = latLngToTimezoneString(39.4928718, -74.50560260000002);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Atlantic/Canary", timeZone) == 0) ? "PASS" : "FAIL (\"Atlantic/Canary\")");
    //Asia/Vientiane
    timeZone = latLngToTimezoneString(17.966667, 102.6);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Vientiane", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Vientiane\")");
    //Europe/Bucharest
    timeZone = latLngToTimezoneString(44.4267674, 26.1025384);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Bucharest", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Bucharest\")");
    //Africa/Lusaka
    timeZone = latLngToTimezoneString(-15.416667, 28.283333);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Lusaka", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Lusaka\")");
    //Asia/Kathmandu
    timeZone = latLngToTimezoneString(27.7, 85.333333);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Kathmandu", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Kathmandu\")");
    //Africa/Harare
    timeZone = latLngToTimezoneString(-17.863889, 31.029722);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Harare", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Harare\")");
    //Asia/Bangkok
    timeZone = latLngToTimezoneString(13.7563309, 100.5017651);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Bangkok", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Bangkok\")");
    //Europe/Rome
    timeZone = latLngToTimezoneString(41.9027835, 12.4963655);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Rome", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Rome\")");
    //Africa/Lome
    timeZone = latLngToTimezoneString(6.131944, 1.222778);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Lome", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Lome\")");
    //America/Denver
    timeZone = latLngToTimezoneString(39.7392358, -104.990251);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Denver", timeZone) == 0) ? "PASS" : "FAIL (\"America/Denver\")");
    //Indian/Reunion
    timeZone = latLngToTimezoneString(34.9967563, -85.1359756);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Indian/Reunion", timeZone) == 0) ? "PASS" : "FAIL (\"Indian/Reunion\")");
    //Europe/Kiev
    timeZone = latLngToTimezoneString(50.4501, 30.5234);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Kiev", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Kiev\")");
    //Europe/Vienna
    timeZone = latLngToTimezoneString(48.2081743, 16.3738189);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Vienna", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Vienna\")");
    //America/Guadeloupe
    timeZone = latLngToTimezoneString(16.265, -61.55099999999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Guadeloupe", timeZone) == 0) ? "PASS" : "FAIL (\"America/Guadeloupe\")");
    //America/Argentina/Cordoba
    timeZone = latLngToTimezoneString(-31.42008329999999, -64.1887761);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Argentina/Cordoba", timeZone) == 0) ? "PASS" : "FAIL (\"America/Argentina/Cordoba\")");
    //Asia/Manila
    timeZone = latLngToTimezoneString(14.5995124, 120.9842195);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Manila", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Manila\")");
    //Asia/Tokyo
    timeZone = latLngToTimezoneString(35.7090259, 139.7319925);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Tokyo", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Tokyo\")");
    //America/Nassau
    timeZone = latLngToTimezoneString(40.517812, -74.238373);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Nassau", timeZone) == 0) ? "PASS" : "FAIL (\"America/Nassau\")");
    //Pacific/Enderbury
    timeZone = latLngToTimezoneString(-27.939607, 153.3342523);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Enderbury", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Enderbury\")");
    //Atlantic/Azores
    /*
    { "exclude_from_slo" : true, "results" : [], "status" : "ZERO_RESULTS" }
    */
    //America/Winnipeg
    timeZone = latLngToTimezoneString(49.8997541, -97.1374937);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Winnipeg", timeZone) == 0) ? "PASS" : "FAIL (\"America/Winnipeg\")");
    //Europe/Dublin
    timeZone = latLngToTimezoneString(53.3498053, -6.2603097);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Dublin", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Dublin\")");
    //Asia/Kuching
    timeZone = latLngToTimezoneString(1.56, 110.345);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Kuching", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Kuching\")");
    //America/Argentina/Ushuaia
    timeZone = latLngToTimezoneString(-54.8019121, -68.3029511);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Argentina/Ushuaia", timeZone) == 0) ? "PASS" : "FAIL (\"America/Argentina/Ushuaia\")");
    //Asia/Colombo
    timeZone = latLngToTimezoneString(6.9270786, 79.861243);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Colombo", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Colombo\")");
    //Asia/Krasnoyarsk
    timeZone = latLngToTimezoneString(56.01528339999999, 92.8932476);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Krasnoyarsk", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Krasnoyarsk\")");
    //America/St_Johns
    timeZone = latLngToTimezoneString(30.0820501, -81.5470587);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/St_Johns", timeZone) == 0) ? "PASS" : "FAIL (\"America/St_Johns\")");
    //Asia/Shanghai
    timeZone = latLngToTimezoneString(31.230416, 121.473701);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Shanghai", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Shanghai\")");
    //Pacific/Kwajalein
    timeZone = latLngToTimezoneString(32.6771304, -117.158947);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Kwajalein", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Kwajalein\")");
    //Africa/Kigali
    timeZone = latLngToTimezoneString(-1.943889, 30.059444);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Kigali", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Kigali\")");
    //Europe/Chisinau
    timeZone = latLngToTimezoneString(47, 28.916667);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Chisinau", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Chisinau\")");
    //America/Noronha
    timeZone = latLngToTimezoneString(-15.4473678, -50.36268860000001);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Noronha", timeZone) == 0) ? "PASS" : "FAIL (\"America/Noronha\")");
    //Europe/Guernsey
    timeZone = latLngToTimezoneString(49.465691, -2.585278);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Guernsey", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Guernsey\")");
    //Europe/Paris
    timeZone = latLngToTimezoneString(48.856614, 2.3522219);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Paris", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Paris\")");
    //America/Guyana
    timeZone = latLngToTimezoneString(4.860416, -58.93018);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Guyana", timeZone) == 0) ? "PASS" : "FAIL (\"America/Guyana\")");
    //Africa/Luanda
    timeZone = latLngToTimezoneString(-8.838333, 13.234444);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Luanda", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Luanda\")");
    //Africa/Abidjan
    timeZone = latLngToTimezoneString(5.316667, -4.033333);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Abidjan", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Abidjan\")");
    //America/Tortola
    timeZone = latLngToTimezoneString(32.6680183, -114.5145891);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Tortola", timeZone) == 0) ? "PASS" : "FAIL (\"America/Tortola\")");
    //Europe/Malta
    timeZone = latLngToTimezoneString(35.937496, 14.375416);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Malta", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Malta\")");
    //Europe/London
    timeZone = latLngToTimezoneString(51.5073509, -0.1277583);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/London", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/London\")");
    //Pacific/Guadalcanal
    timeZone = latLngToTimezoneString(32.6756154, -117.160777);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Guadalcanal", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Guadalcanal\")");
    //Pacific/Gambier
    timeZone = latLngToTimezoneString(-27.9437077, 153.3291617);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Gambier", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Gambier\")");
    //America/Thule
    timeZone = latLngToTimezoneString(36.2663547, -91.5715116);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Thule", timeZone) == 0) ? "PASS" : "FAIL (\"America/Thule\")");
    //America/Rankin_Inlet
    /*
    { "results" : [], "status" : "ZERO_RESULTS" }
    */
    //America/Regina
    timeZone = latLngToTimezoneString(36.1841855, -106.9567082);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Regina", timeZone) == 0) ? "PASS" : "FAIL (\"America/Regina\")");
    //America/Indiana/Vincennes
    timeZone = latLngToTimezoneString(38.677269, -87.5286325);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Indiana/Vincennes", timeZone) == 0) ? "PASS" : "FAIL (\"America/Indiana/Vincennes\")");
    //America/Santarem
    timeZone = latLngToTimezoneString(-2.4506291, -54.7009228);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Santarem", timeZone) == 0) ? "PASS" : "FAIL (\"America/Santarem\")");
    //Africa/Djibouti
    timeZone = latLngToTimezoneString(11.825138, 42.590275);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Djibouti", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Djibouti\")");
    //Pacific/Tahiti
    timeZone = latLngToTimezoneString(34.0381281, -118.5373238);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Tahiti", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Tahiti\")");
    //Europe/San_Marino
    timeZone = latLngToTimezoneString(43.94236, 12.457777);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/San_Marino", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/San_Marino\")");
    //America/Argentina/San_Luis
    timeZone = latLngToTimezoneString(-33.3017267, -66.3377522);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Argentina/San_Luis", timeZone) == 0) ? "PASS" : "FAIL (\"America/Argentina/San_Luis\")");
    //Africa/Ceuta
    timeZone = latLngToTimezoneString(35.8893874, -5.3213455);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Ceuta", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Ceuta\")");
    //Asia/Singapore
    timeZone = latLngToTimezoneString(1.352083, 103.819836);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Singapore", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Singapore\")");
    //America/Campo_Grande
    timeZone = latLngToTimezoneString(-20.4697105, -54.6201211);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Campo_Grande", timeZone) == 0) ? "PASS" : "FAIL (\"America/Campo_Grande\")");
    //Africa/Tunis
    timeZone = latLngToTimezoneString(36.8064948, 10.1815316);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Tunis", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Tunis\")");
    //Europe/Copenhagen
    timeZone = latLngToTimezoneString(55.6760968, 12.5683371);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Copenhagen", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Copenhagen\")");
    //Asia/Pontianak
    timeZone = latLngToTimezoneString(-0.0263303, 109.3425039);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Pontianak", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Pontianak\")");
    //Asia/Dubai
    timeZone = latLngToTimezoneString(25.2048493, 55.2707828);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Dubai", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Dubai\")");
    //Africa/Khartoum
    timeZone = latLngToTimezoneString(15.5006544, 32.5598994);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Khartoum", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Khartoum\")");
    //Europe/Helsinki
    timeZone = latLngToTimezoneString(60.17332440000001, 24.9410248);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Helsinki", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Helsinki\")");
    //America/Whitehorse
    timeZone = latLngToTimezoneString(60.7211871, -135.0568449);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Whitehorse", timeZone) == 0) ? "PASS" : "FAIL (\"America/Whitehorse\")");
    //America/Maceio
    timeZone = latLngToTimezoneString(-9.6498487, -35.7089492);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Maceio", timeZone) == 0) ? "PASS" : "FAIL (\"America/Maceio\")");
    //Africa/Douala
    timeZone = latLngToTimezoneString(4.05, 9.7);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Douala", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Douala\")");
    //Asia/Kuala_Lumpur
    timeZone = latLngToTimezoneString(3.139003, 101.686855);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Kuala_Lumpur", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Kuala_Lumpur\")");
    //America/Martinique
    timeZone = latLngToTimezoneString(14.641528, -61.024174);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Martinique", timeZone) == 0) ? "PASS" : "FAIL (\"America/Martinique\")");
    //America/Sao_Paulo
    timeZone = latLngToTimezoneString(-23.5505199, -46.63330939999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Sao_Paulo", timeZone) == 0) ? "PASS" : "FAIL (\"America/Sao_Paulo\")");
    //America/Dawson
    timeZone = latLngToTimezoneString(34.8258611, -90.5433333);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Dawson", timeZone) == 0) ? "PASS" : "FAIL (\"America/Dawson\")");
    //Africa/Kinshasa
    timeZone = latLngToTimezoneString(-4.325, 15.322222);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Kinshasa", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Kinshasa\")");
    //Europe/Riga
    timeZone = latLngToTimezoneString(56.9496487, 24.1051864);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Riga", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Riga\")");
    //Africa/Tripoli
    timeZone = latLngToTimezoneString(32.8872094, 13.1913383);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Tripoli", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Tripoli\")");
    //Europe/Madrid
    timeZone = latLngToTimezoneString(40.4167754, -3.7037902);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Madrid", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Madrid\")");
    //America/Nipigon
    timeZone = latLngToTimezoneString(49.0157351, -88.268316);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Nipigon", timeZone) == 0) ? "PASS" : "FAIL (\"America/Nipigon\")");
    //Pacific/Fakaofo
    timeZone = latLngToTimezoneString(-9.380255499999999, -171.2188355);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Fakaofo", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Fakaofo\")");
    //Europe/Skopje
    timeZone = latLngToTimezoneString(41.9973462, 21.4279956);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Skopje", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Skopje\")");
    //America/St_Thomas
    timeZone = latLngToTimezoneString(39.643382, -76.34796);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/St_Thomas", timeZone) == 0) ? "PASS" : "FAIL (\"America/St_Thomas\")");
    //Africa/Maseru
    timeZone = latLngToTimezoneString(-29.31, 27.48);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Maseru", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Maseru\")");
    //Europe/Sofia
    timeZone = latLngToTimezoneString(42.6977082, 23.3218675);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Sofia", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Sofia\")");
    //America/Porto_Velho
    timeZone = latLngToTimezoneString(-8.761160499999999, -63.9004303);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Porto_Velho", timeZone) == 0) ? "PASS" : "FAIL (\"America/Porto_Velho\")");
    //America/St_Kitts
    timeZone = latLngToTimezoneString(32.6650802, -114.5132397);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/St_Kitts", timeZone) == 0) ? "PASS" : "FAIL (\"America/St_Kitts\")");
    //Africa/Casablanca
    timeZone = latLngToTimezoneString(33.5731104, -7.589843399999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Casablanca", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Casablanca\")");
    //Asia/Hebron
    timeZone = latLngToTimezoneString(31.532569, 35.09982600000001);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Hebron", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Hebron\")");
    //Asia/Dili
    timeZone = latLngToTimezoneString(-8.549999999999999, 125.566667);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Dili", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Dili\")");
    //America/Argentina/San_Juan
    timeZone = latLngToTimezoneString(-31.5351074, -68.5385941);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Argentina/San_Juan", timeZone) == 0) ? "PASS" : "FAIL (\"America/Argentina/San_Juan\")");
    //Asia/Almaty
    timeZone = latLngToTimezoneString(43.2220146, 76.8512485);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Almaty", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Almaty\")");
    //Europe/Sarajevo
    timeZone = latLngToTimezoneString(43.8562586, 18.4130763);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Sarajevo", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Sarajevo\")");
    //America/Boa_Vista
    timeZone = latLngToTimezoneString(2.8235098, -60.6758331);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Boa_Vista", timeZone) == 0) ? "PASS" : "FAIL (\"America/Boa_Vista\")");
    //Africa/Addis_Ababa
    timeZone = latLngToTimezoneString(8.9806034, 38.7577605);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Addis_Ababa", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Addis_Ababa\")");
    //Indian/Mayotte
    /*
    { "results" : [], "status" : "ZERO_RESULTS" }
    */
    //Africa/Lubumbashi
    timeZone = latLngToTimezoneString(-11.664722, 27.479444);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Lubumbashi", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Lubumbashi\")");
    //Atlantic/Cape_Verde
    /*
    { "results" : [], "status" : "ZERO_RESULTS" }
    */
    //America/Lower_Princes
    timeZone = latLngToTimezoneString(44.1683998, -81.6395915);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Lower_Princes", timeZone) == 0) ? "PASS" : "FAIL (\"America/Lower_Princes\")");
    //Europe/Oslo
    timeZone = latLngToTimezoneString(59.9138688, 10.7522454);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Oslo", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Oslo\")");
    //Africa/Monrovia
    timeZone = latLngToTimezoneString(6.313333, -10.801389);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Monrovia", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Monrovia\")");
    //Asia/Muscat
    timeZone = latLngToTimezoneString(23.61, 58.54);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Muscat", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Muscat\")");
    //America/Thunder_Bay
    timeZone = latLngToTimezoneString(48.3808951, -89.2476823);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Thunder_Bay", timeZone) == 0) ? "PASS" : "FAIL (\"America/Thunder_Bay\")");
    //America/Juneau
    timeZone = latLngToTimezoneString(58.3019444, -134.4197222);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Juneau", timeZone) == 0) ? "PASS" : "FAIL (\"America/Juneau\")");
    //Pacific/Rarotonga
    timeZone = latLngToTimezoneString(-27.9386892, 153.3179699);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Rarotonga", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Rarotonga\")");
    //Atlantic/Faroe
    /*
    { "results" : [], "status" : "ZERO_RESULTS" }
    */
    //America/Cayenne
    timeZone = latLngToTimezoneString(4.9227, -52.32689999999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Cayenne", timeZone) == 0) ? "PASS" : "FAIL (\"America/Cayenne\")");
    //America/Cuiaba
    timeZone = latLngToTimezoneString(-15.6014109, -56.0978917);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Cuiaba", timeZone) == 0) ? "PASS" : "FAIL (\"America/Cuiaba\")");
    //Africa/Maputo
    timeZone = latLngToTimezoneString(-25.966667, 32.583333);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Maputo", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Maputo\")");
    //Asia/Anadyr
    timeZone = latLngToTimezoneString(64.733333, 177.516667);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Anadyr", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Anadyr\")");
    //Asia/Kabul
    timeZone = latLngToTimezoneString(34.533333, 69.166667);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Kabul", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Kabul\")");
    //America/Santa_Isabel
    timeZone = latLngToTimezoneString(-33.447102, -70.630402);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Santa_Isabel", timeZone) == 0) ? "PASS" : "FAIL (\"America/Santa_Isabel\")");
    //Asia/Damascus
    timeZone = latLngToTimezoneString(33.513, 36.292);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Damascus", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Damascus\")");
    //Pacific/Noumea
    timeZone = latLngToTimezoneString(-22.2364742, 166.4424634);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Noumea", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Noumea\")");
    //America/Anchorage
    timeZone = latLngToTimezoneString(61.2180556, -149.9002778);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Anchorage", timeZone) == 0) ? "PASS" : "FAIL (\"America/Anchorage\")");
    //Asia/Kolkata
    timeZone = latLngToTimezoneString(22.572646, 88.36389500000001);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Kolkata", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Kolkata\")");
    //Pacific/Niue
    timeZone = latLngToTimezoneString(-19.0563519, -169.910359);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Niue", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Niue\")");
    //Asia/Kamchatka
    timeZone = latLngToTimezoneString(61.43439809999999, 166.7884131);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Kamchatka", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Kamchatka\")");
    //America/Matamoros
    timeZone = latLngToTimezoneString(25.8690294, -97.50273759999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Matamoros", timeZone) == 0) ? "PASS" : "FAIL (\"America/Matamoros\")");
    //Europe/Stockholm
    timeZone = latLngToTimezoneString(59.32932349999999, 18.0685808);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Stockholm", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Stockholm\")");
    //America/Havana
    timeZone = latLngToTimezoneString(30.62380689999999, -84.41462899999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Havana", timeZone) == 0) ? "PASS" : "FAIL (\"America/Havana\")");
    //Pacific/Auckland
    timeZone = latLngToTimezoneString(-36.9206113, 174.8389097);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Auckland", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Auckland\")");
    //America/Rainy_River
    timeZone = latLngToTimezoneString(29.889469, -95.4430308);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Rainy_River", timeZone) == 0) ? "PASS" : "FAIL (\"America/Rainy_River\")");
    //Asia/Omsk
    timeZone = latLngToTimezoneString(54.98333299999999, 73.36666699999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Omsk", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Omsk\")");
    //Africa/Algiers
    timeZone = latLngToTimezoneString(36.752887, 3.042048);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Algiers", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Algiers\")");
    //America/Guayaquil
    timeZone = latLngToTimezoneString(-2.1709979, -79.9223592);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Guayaquil", timeZone) == 0) ? "PASS" : "FAIL (\"America/Guayaquil\")");
    //Indian/Maldives
    timeZone = latLngToTimezoneString(4.1784351, 73.513646);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Indian/Maldives", timeZone) == 0) ? "PASS" : "FAIL (\"Indian/Maldives\")");
    //Asia/Makassar
    timeZone = latLngToTimezoneString(-5.147665099999999, 119.4327314);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Makassar", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Makassar\")");
    //America/Monterrey
    timeZone = latLngToTimezoneString(36.6002378, -121.8946761);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Monterrey", timeZone) == 0) ? "PASS" : "FAIL (\"America/Monterrey\")");
    //Europe/Amsterdam
    timeZone = latLngToTimezoneString(52.3702157, 4.895167900000001);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Amsterdam", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Amsterdam\")");
    //America/St_Lucia
    timeZone = latLngToTimezoneString(13.909444, -60.978893);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/St_Lucia", timeZone) == 0) ? "PASS" : "FAIL (\"America/St_Lucia\")");
    //Europe/Uzhgorod
    timeZone = latLngToTimezoneString(48.6208, 22.287883);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Uzhgorod", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Uzhgorod\")");
    //America/Indiana/Marengo
    timeZone = latLngToTimezoneString(38.36922759999999, -86.34359169999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Indiana/Marengo", timeZone) == 0) ? "PASS" : "FAIL (\"America/Indiana/Marengo\")");
    //Pacific/Saipan
    timeZone = latLngToTimezoneString(-27.9354551, 153.3267151);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Saipan", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Saipan\")");
    //America/Bogota
    timeZone = latLngToTimezoneString(4.710988599999999, -74.072092);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Bogota", timeZone) == 0) ? "PASS" : "FAIL (\"America/Bogota\")");
    //America/Indiana/Vevay
    timeZone = latLngToTimezoneString(38.7478401, -85.0671725);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Indiana/Vevay", timeZone) == 0) ? "PASS" : "FAIL (\"America/Indiana/Vevay\")");
    //America/Guatemala
    timeZone = latLngToTimezoneString(-33.0976825, -64.3174052);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Guatemala", timeZone) == 0) ? "PASS" : "FAIL (\"America/Guatemala\")");
    //America/Puerto_Rico
    //timeZone = latLngToTimezoneString(37.6927729, -108.0303502);
    timeZone = latLngToTimezoneString(18.220833, -66.590149);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Puerto_Rico", timeZone) == 0) ? "PASS" : "FAIL (\"America/Puerto_Rico\")");
    //America/Marigot
    timeZone = latLngToTimezoneString(12.1234794, -61.74514490000001);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Marigot", timeZone) == 0) ? "PASS" : "FAIL (\"America/Marigot\")");
    //Africa/Juba
    timeZone = latLngToTimezoneString(4.85, 31.6);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Africa/Juba", timeZone) == 0) ? "PASS" : "FAIL (\"Africa/Juba\")");
    //America/Costa_Rica
    timeZone = latLngToTimezoneString(9.748916999999999, -83.753428);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Costa_Rica", timeZone) == 0) ? "PASS" : "FAIL (\"America/Costa_Rica\")");
    //America/Caracas
    timeZone = latLngToTimezoneString(10.4696404, -66.8037185);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Caracas", timeZone) == 0) ? "PASS" : "FAIL (\"America/Caracas\")");
    //Pacific/Nauru
    timeZone = latLngToTimezoneString(-27.9286205, 153.3256688);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Pacific/Nauru", timeZone) == 0) ? "PASS" : "FAIL (\"Pacific/Nauru\")");
    //Europe/Minsk
    timeZone = latLngToTimezoneString(53.90453979999999, 27.5615244);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Minsk", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Minsk\")");
    //America/Belem
    timeZone = latLngToTimezoneString(-1.4557549, -48.4901799);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Belem", timeZone) == 0) ? "PASS" : "FAIL (\"America/Belem\")");
    //America/Cancun
    timeZone = latLngToTimezoneString(30.3119394, -95.2982341);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Cancun", timeZone) == 0) ? "PASS" : "FAIL (\"America/Cancun\")");
    //America/Hermosillo
    timeZone = latLngToTimezoneString(33.8791825, -118.2959063);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Hermosillo", timeZone) == 0) ? "PASS" : "FAIL (\"America/Hermosillo\")");
    //Asia/Chongqing
    timeZone = latLngToTimezoneString(29.56301, 106.551557);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Chongqing", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Chongqing\")");
    //Asia/Beirut
    timeZone = latLngToTimezoneString(33.8886289, 35.4954794);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Beirut", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Beirut\")");
    //Europe/Gibraltar
    timeZone = latLngToTimezoneString(36.140751, -5.353585);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Europe/Gibraltar", timeZone) == 0) ? "PASS" : "FAIL (\"Europe/Gibraltar\")");
    //Asia/Urumqi
    timeZone = latLngToTimezoneString(43.825592, 87.61684799999999);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("Asia/Urumqi", timeZone) == 0) ? "PASS" : "FAIL (\"Asia/Urumqi\")");
    //America/Mazatlan
    timeZone = latLngToTimezoneString(45.229293, -123.170145);
    printf("Time zone : %s -- verdict : %s\n", timeZone, (strcmp("America/Mazatlan", timeZone) == 0) ? "PASS" : "FAIL (\"America/Mazatlan\")");
}
