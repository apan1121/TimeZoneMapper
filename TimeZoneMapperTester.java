
public class TimeZoneMapperTester {
    public static void main(String[] args) {
        String timeZone;

        timeZone = TimeZoneMapper.latLngToTimezoneString(25.152240, 121.569398);
        System.out.println("Time zone : " + timeZone);

        timeZone = TimeZoneMapper.latLngToTimezoneString(36.861872, 139.601052);
        System.out.println("Time zone : " + timeZone);
    }
}
