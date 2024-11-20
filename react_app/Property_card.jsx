// src/components/PropertyCard.js
import React from 'react';

const PropertyCard = ({ image, title, price, location }) => (
  <div className="relative border rounded-lg shadow-md overflow-hidden hover:shadow-xl transition-shadow">
    <img
      src={image}
      alt={title}
      className="w-full h-48 object-cover transition-transform hover:scale-110"
    />
    <div className="p-4">
      <h3 className="font-bold text-lg">{title}</h3>
      <p className="text-gray-600 text-lg font-medium">${price}</p>
      <p className="text-sm text-gray-500">{location}</p>
    </div>
    <div className="absolute top-2 right-2 bg-blue-600 text-white text-sm px-2 py-1 rounded">
      Featured
    </div>
  </div>
);

export default PropertyCard;