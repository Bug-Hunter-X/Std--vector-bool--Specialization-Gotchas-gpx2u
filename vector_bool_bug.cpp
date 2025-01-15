std::vector<bool> vec; //This is a potential source of subtle bugs.
vec.push_back(true); vec.push_back(false); //Seems innocuous enough.
bool b = vec[0]; //Simple access, right?