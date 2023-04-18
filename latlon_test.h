#pragma once
#include "latlon.h"
#include <iostream>

namespace LatLon {
inline constexpr const double lat1{dmsToDeg(50, 03, 59, 'N')};
inline constexpr const double lon1{dmsToDeg(5, 42, 53, 'W')};
inline constexpr const double lat2{dmsToDeg(58, 38, 38, 'N')};
inline constexpr const double lon2{dmsToDeg(3, 04, 12, 'W')};

inline int test() {
  const double d{distance(lat1, lon1, lat2, lon2)};
  const double b{bearing(lat1, lon1, lat2, lon2)};
  double lat_m, lon_m;
  midpoint(lat_m, lon_m, lat1, lon1, lat2, lon2);
  double lat_d, lon_d;
  destination(lat_d, lon_d, lat1, lon1, d, b);
  std::cout << "Position_1: " << lat1 << " " << lon1 << std::endl
            << "Position_2: " << lat2 << " " << lon2 << std::endl
            << "Distance: " << d << std::endl
            << "Bearing: " << b << std::endl
            << "Midpoint: " << lat_m << " " << lon_m << std::endl
            << "Destination: " << lat_d << " " << lon_d << std::endl;
  return 0;
}

} // namespace LatLon
