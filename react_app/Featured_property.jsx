// src/components/FeaturedProperties.js
import React from 'react';
import PropertyCard from './Property_card';

const properties = [
  { image: '/path-to-image1.jpg', title: 'Luxury Villa', price: '2,500,000', location: 'California' },
  { image: '/path-to-image2.jpg', title: 'Modern Apartment', price: '850,000', location: 'New York' },
  { image: '/path-to-image3.jpg', title: 'Cozy Cottage', price: '450,000', location: 'Texas' },
];

const FeaturedProperties = () => (
  <section id="properties" className="py-10 bg-gray-100">
    <h2 className="text-3xl font-bold text-center mb-6">Featured Properties</h2>
    <div className="grid grid-cols-1 sm:grid-cols-2 md:grid-cols-3 gap-6 px-10">
      {properties.map((property, index) => (
        <PropertyCard key={index} {...property} />
      ))}
    </div>
  </section>
);

export default FeaturedProperties;
