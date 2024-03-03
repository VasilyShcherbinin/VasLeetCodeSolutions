class Solution {

    final double KELVIN_OFFSET = 273.15;
    final double FAHRENHEIT_FACTOR = 1.8;
    final double FAHRENHEIT_OFFSET = 32.0;
    
    public double[] convertTemperature(double celsius) {        
        double[] result = new double[2];
        
        // Convert Celsius to Kelvin
        double kelvin = celsius + KELVIN_OFFSET;
        
        // Convert Celsius to Fahrenheit
        double fahrenheit = celsius * FAHRENHEIT_FACTOR + FAHRENHEIT_OFFSET;
        
        // Populate result array
        result[0] = kelvin;
        result[1] = fahrenheit;
        
        return result;
    }
}