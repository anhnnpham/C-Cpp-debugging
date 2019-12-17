    enum task {paint, wallpaper, carpet, tile, woodFloor};
    // returns task = an int --> enum also receives int?
    task = getTaskAssignment();
    getRoomInformation(task, roomWidth);
    // used just like enum task's variable
    if (task == paint or task == wallpaper) // no "" needed
int getTaskAssignment() { 
    //enum task {paint, wallpaper, carpet, tile, woodFloor};
    int task;
    cin >> task;
    return task;
void getRoomInformation(int task, float &roomWidth) {
   if (task == 0 or task == 1)


