// src/components/Hero.js
import React from 'react';

const Hero = () => (
  <section
    id="home"
    className="h-screen bg-gradient-to-r from-blue-600 via-blue-500 to-blue-400 flex flex-col justify-center items-start p-10 text-white"
  >
    <h1 className="text-5xl md:text-6xl font-extrabold mb-4 animate-fadeIn">
      Find Your Dream Home
    </h1>
    <p className="text-lg md:text-xl mb-6 max-w-lg leading-relaxed">
      Discover luxury properties at the best locations with modern amenities and beautiful surroundings.
    </p>
    <button className="bg-white text-blue-600 px-8 py-3 rounded-lg shadow-lg hover:scale-105 transition-transform">
      Explore Now
    </button>
  </section>
);

export default Hero;
