import React from 'react';
import Header from './amfoss/Header_component';
import Hero from './amfoss/Hero_Section';
import FeaturedProperties from './amfoss/Featured_property';
import Contact from './amfoss/Contact_form';
import PropertyCard from './amfoss/Property_card';

const App = () => (
  <div>
    <Header />
    <Hero />
    <FeaturedProperties />
    <Contact />
  </div>
);

export default App;