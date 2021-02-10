/*
 * Complete the findPoint function below.
 */
vector<int> findPoint(int px, int py, int qx, int qy) {
    /*
     * Write your code here.
     */
     
     int rx = 0, ry = 0;
     rx = qx + (qx - px);
     ry = qy + (qy - py);
     return {rx, ry};

}