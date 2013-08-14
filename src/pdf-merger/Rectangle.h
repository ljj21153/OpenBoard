/*
 * Copyright (C) 2013 Open Education Foundation
 *
 * Copyright (C) 2010-2013 Groupement d'Intérêt Public pour
 * l'Education Numérique en Afrique (GIP ENA)
 *
 * This file is part of OpenBoard.
 *
 * OpenBoard is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3 of the License,
 * with a specific linking exception for the OpenSSL project's
 * "OpenSSL" library (or with modified versions of it that use the
 * same license as the "OpenSSL" library).
 *
 * OpenBoard is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenBoard. If not, see <http://www.gnu.org/licenses/>.
 */




#if !defined Rectangle_h
#define Rectangle_h

#include "Transformation.h"

#include <vector>
#include <map>


namespace merge_lib
{
   class Object;

   class Rectangle
   {
   public:
      Rectangle(const char * rectangleName);

      Rectangle(const char * rectangleName, const std::string content);
      void appendRectangleToString(std::string & content, const char * delimeter);
      void updateRectangle(Object * objectWithRectangle, const char * delimeter);
      void setNewRectangleName(const char * newName);

      void recalculateInternalRectangleCoordinates(const PageTransformations & transformations);
      double getWidth();
      double getHeight();

      //members
      double x1, y1, x2, y2;
   private:
      //methods
      const std::string _getRectangleAsString(const char * delimeter);
      //members   
      const char * _rectangleName;
      TransformationMatrix _tm;
   };
}
#endif

