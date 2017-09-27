/** A class that represents a path via pursuit curves.
 *  @author Chrisitan Conable
 */
public class Path {
    private Point currPoint;
    private Point nextPoint;
      /** What to do, what to do... */
      public static void main (String[]  Args){

  }
  public Path (double x, double y){
    this.nextPoint =  this.currPoint;
  }
  public double getCurrX() {
    return this.currPoint.x;
  }
  public double getCurrY(){
    return this.currPoint.y;
  }
  public double getNextX() {
    return this.nextPoint.x;
  }
  public double getNextY(){
    return this.nextPoint.y;
  }
}

class Point {

    /** The x coordinate of Point. */
    private double x;
    /** The y coordinate of Point. */
    private double y;

    /** A constructor that returns a point at the origin. */
    Point() {
        this.x = 0;
        this.y = 0;
    }
    /** A constructor that takes in the x, y coordinate of a point. */
    Point(double x, double y) {
        this.x = x;
        this.y = y;
    }
    /** A copy constructor that creates a point with the same x and y values. */
    Point(Point point) {
        this.x = point.getX();
        this.y = point.getY();
    }
    /** Returns the x-coordinate of this point. */
    double getX() {
        return this.x;
    }
    /** Returns the y-coordinate of this point. */
    double getY() {
        return this.y;
    }
    /** Sets the x-coordinate to X in this point. */
    void setX(double x) {
        this.x = x;
    }
    /** Sets the y-coordinate to Y in this point. */
    void setY(double y) {
        this.y = y;
    }
*/
